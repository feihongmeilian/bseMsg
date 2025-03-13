#ifndef BSE_MSG_N_Q_X_X_D_B_F_MSG_FILE_H
#define BSE_MSG_N_Q_X_X_D_B_F_MSG_FILE_H

#include "dbf/DBFFile.h"

namespace bse {
namespace msg {
// 证券信息库
class NQXXDBFMsgFile : public dbf::DBFFile {
public:
  explicit NQXXDBFMsgFile(const std::string &);
  ~NQXXDBFMsgFile() {}
};
} // namespace msg
} // namespace bse
#endif
