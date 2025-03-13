#ifndef BSE_MSG_B_J_S_B_S_D_B_F_MSG_FILE_H
#define BSE_MSG_B_J_S_B_S_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 非交易委托库
class BJSBSDBFMsgFile : public dbf::DBFFile {
public:
  explicit BJSBSDBFMsgFile(const std::string &);
  ~BJSBSDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
