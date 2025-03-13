#ifndef BSE_MSG_N_Q_W_T_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_W_T_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 申报库
class NQWTDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQWTDBFMsgFile(const std::string &);
  ~NQWTDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
