#ifndef BSE_MSG_N_Q_F_G_K_S_B_X_X_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_F_G_K_S_B_X_X_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 非公开转让申报信息库
class NQFGKSBXXDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQFGKSBXXDBFMsgFile(const std::string &);
  ~NQFGKSBXXDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
