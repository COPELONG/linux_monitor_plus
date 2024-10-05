#include <Poco/Net/SMTPClientSession.h>
#include <Poco/Net/MailMessage.h>
#include <Poco/Net/NetException.h>
#include <Poco/Net/SecureSMTPClientSession.h>
#include <Poco/Net/ConsoleCertificateHandler.h>
#include <Poco/Net/SSLManager.h>
#include <Poco/Net/AcceptCertificateHandler.h>
#include <Poco/Net/RejectCertificateHandler.h>
#include <Poco/Net/SSLException.h>
#include <Poco/Net/PrivateKeyPassphraseHandler.h>
#include <Poco/Net/InvalidCertificateHandler.h>
#include <Poco/SharedPtr.h>
#include <Poco/Util/InitApplication.h>
#include <iostream>

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;
namespace SendMail {
void sendEmail(const string &content) {
  try {
    // 初始化 SSL
    Poco::Net::initializeSSL();

    // 配置 SMTP 会话
    std::string smtpServer = "smtp.gmail.com"; // SMTP 服务器地址
    unsigned short smtpPort = 587; // 端口号，通常为587 (STARTTLS) 或 465 (SSL)
    std::string username = "your-email@gmail.com"; // 邮箱账号
    std::string password = "your-password";        // 邮箱密码

    // 创建 SecureSMTPClientSession 会话（支持 STARTTLS/SSL）
    SecureSMTPClientSession session(smtpServer, smtpPort);

    // 启用 STARTTLS
    session.login(SMTPClientSession::AUTH_LOGIN, username, password);
    session.startTLS();

    // 创建邮件消息
    MailMessage message;
    message.setSender("your-email@gmail.com"); // 发送人
    message.addRecipient(MailRecipient(MailRecipient::PRIMARY_RECIPIENT,
                                       "recipient-email@gmail.com")); // 接收人
    message.setSubject("Warnning Linux Monitor"); // 邮件主题
    message.setContentType("text/plain");         // 内容类型
    message.setContent(content);                  // 邮件正文

    // 发送邮件
    session.sendMessage(message);
    session.close();

    std::cout << "Email sent successfully." << std::endl;
  } catch (SMTPException &e) {
    std::cerr << "SMTP Exception: " << e.displayText() << std::endl;
  } catch (NetException &e) {
    std::cerr << "Network Exception: " << e.displayText() << std::endl;
  } catch (SSLException &e) {
    std::cerr << "SSL Exception: " << e.displayText() << std::endl;
  } catch (Exception &e) {
    std::cerr << "Other Exception: " << e.displayText() << std::endl;
  }

  // 清理 SSL
  Poco::Net::uninitializeSSL();
}
}
