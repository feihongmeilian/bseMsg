#ifndef BSE_MSG_N_Q_H_B_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_H_B_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 回报库
class NQHBDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQHBDBFMsgFile(const std::string &);
  ~NQHBDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
