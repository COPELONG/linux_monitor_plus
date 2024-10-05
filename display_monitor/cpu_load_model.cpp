#include "cpu_load_model.h"
#include <unistd.h>
#include <signal.h>
#include <thread>
#include "SendMail.h"
namespace monitor {
CpuLoadModel::CpuLoadModel(QObject *parent) : MonitorInterModel(parent) {
  header_ << tr("load_1");
  header_ << tr("load_3");
  header_ << tr("load_15");
}

int CpuLoadModel::rowCount(const QModelIndex &parent) const {
  return monitor_data_.size();
}

int CpuLoadModel::columnCount(const QModelIndex &parent) const {
  return COLUMN_MAX;
}

QVariant CpuLoadModel::headerData(int section, Qt::Orientation orientation,
                                  int role) const {
  if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
    return header_[section];
  }

  return MonitorInterModel::headerData(section, orientation, role);
}

QVariant CpuLoadModel::data(const QModelIndex &index, int role) const {
  if (index.column() < 0 || index.column() >= COLUMN_MAX) {
    return QVariant();
  }

  if (role == Qt::DisplayRole) {
    if (index.row() < monitor_data_.size() && index.column() < COLUMN_MAX)
      return monitor_data_[index.row()][index.column()];
  }
  return QVariant();
}

void CpuLoadModel::UpdateMonitorInfo(
    const monitor::proto::MonitorInfo &monitor_info) {
  beginResetModel();
  monitor_data_.clear();

  monitor_data_.push_back(insert_one_cpu_load(monitor_info.cpu_load()));

  // QModelIndex leftTop = createIndex(0, 0);
  // QModelIndex rightBottom = createIndex(monitor_data_.size(), COLUMN_MAX);
  // emit dataChanged(leftTop, rightBottom, {});

  endResetModel();

  return;
}

void CpuLoadModel::playSound(pid_t &pid) {
  pid = fork();
  if (pid == 0) {
    // 子进程运行 aplay
    soundProcessID = getpid();
    execlp("aplay", "aplay", "/path/to/beep.wav", nullptr);
    perror("execlp failed"); // 输出错误信息

    stopSound(soundProcessID);
    soundProcessID = -1; // 设置为 -1，表示没有活动的声音进程

  } else if (pid > 0) {
    std::cout << "Sound playing in process: " << pid << "\n";
  }
}

void CpuLoadModel::stopSound(pid_t pid) {
  if (pid > 0) {
    kill(pid, SIGTERM); // 向子进程发送终止信号
    std::cout << "Sound stopped.\n";
  }
}

void CpuLoadModel::Warnning(const monitor::proto::CpuLoad &cpu_load) {
  long threshold_warn = threshold * cpu_nums;

  // 检查子进程是否已结束
  if (soundProcessID != -1) {
    int status;
    pid_t result = waitpid(soundProcessID, &status, WNOHANG); // 非阻塞检查
    if (result == soundProcessID) {
      // 如果子进程已经结束，重置 soundProcessID
      std::cout << "Sound process ended.\n";
      soundProcessID = -1;
    }
  }

  if (cpu_load.load_avg_1() >= threshold_warn ||
      cpu_load.load_avg_2() >= threshold_warn ||
      cpu_load.load_avg_3() >= threshold_warn) {

    // 只有当可以发送邮件时
    if (is_send) {
      std::unique_ptr<std::thread> thread_ = nullptr;

      thread_ = std::make_unique<std::thread>([&]() {
                  is_send = false; // 禁止重复发送邮件
                  std::string message("cpu_load_avg is Warnning");
                  SendMail::sendEmail(message);
                  std::this_thread::sleep_for(
                      std::chrono::seconds(1800)); // 等待30分钟
                  is_send = true;                  // 恢复邮件发送
                }).detach();                       // 分离线程
    }

    if (soundProcessID == -1) { // 只有在没有正在播放声音的情况下才启动
      playSound(soundProcessID);
    }
  } else if (soundProcessID != -1) {
    stopSound(soundProcessID);
    soundProcessID = -1; // 设置为 -1，表示没有活动的声音进程
  }
}

std::vector<QVariant>
CpuLoadModel::insert_one_cpu_load(const monitor::proto::CpuLoad &cpu_load) {

  Warnning(cpu_load);

  std::vector<QVariant> cpu_load_list;
  for (int i = CpuLoad::CPU_AVG_1; i < COLUMN_MAX; i++) {
    switch (i) {
    case CpuLoad::CPU_AVG_1:
      cpu_load_list.push_back(QVariant(cpu_load.load_avg_1()));
      break;
    case CpuLoad::CPU_AVG_3:
      cpu_load_list.push_back(QVariant(cpu_load.load_avg_3()));
      break;
    case CpuLoad::CPU_AVG_15:
      cpu_load_list.push_back(QVariant(cpu_load.load_avg_15()));
      break;
    default:
      break;
    }
  }
  return cpu_load_list;
}
} // namespace monitor
