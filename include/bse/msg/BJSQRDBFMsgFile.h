#ifndef BSE_MSG_B_J_S_Q_R_D_B_F_MSG_FILE_H
#define BSE_MSG_B_J_S_Q_R_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 非交易确认库
class BJSQRDBFMsgFile : public dbf::DBFFile {
public:
  explicit BJSQRDBFMsgFile(const std::string &);
  ~BJSQRDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
