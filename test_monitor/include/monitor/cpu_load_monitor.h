#pragma once

#include <string>

#include "monitor_inter.h"

#include "monitor_info.pb.h"

namespace monitor {
class CpuLoadMonitor : public MonitorInter {
 public:
  CpuLoadMonitor() {}
  void UpdateOnce(monitor::proto::MonitorInfo* monitor_info);
  void Stop() override {}

 private:
  float load_avg_1_;
  float load_avg_3_;
  float load_avg_15_;
};

}  // namespace monitor
