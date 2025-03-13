#ifndef BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 协议转让申报信息库
class NQXYXXDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQXYXXDBFMsgFile(const std::string &);
  ~NQXYXXDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
