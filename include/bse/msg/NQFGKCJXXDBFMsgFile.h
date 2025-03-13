#ifndef BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 非公开转让成交信息库
class NQFGKCJXXDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQFGKCJXXDBFMsgFile(const std::string &);
  ~NQFGKCJXXDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
