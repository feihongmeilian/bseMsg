#ifndef BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 做市业务申报信息库
class NQZSXXDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQZSXXDBFMsgFile(const std::string &);
  ~NQZSXXDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
