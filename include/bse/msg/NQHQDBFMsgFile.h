#ifndef BSE_MSG_N_Q_H_Q_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_H_Q_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 证券行情库
class NQHQDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQHQDBFMsgFile(const std::string &);
  ~NQHQDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
