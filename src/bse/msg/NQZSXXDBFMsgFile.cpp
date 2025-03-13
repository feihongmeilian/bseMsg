#include "bse/msg/NQZSXXDBFMsgFile.h"

namespace bse {
namespace msg {
NQZSXXDBFMsgFile::NQZSXXDBFMsgFile(const std::string &name)
    : dbf::DBFFile(name) {
  appendHeadField("ZSZQDM", "C", 6);
  appendHeadField("ZSYWLB", "C", 2);
  appendHeadField("ZSWTSL", "N", 12, 0);
  appendHeadField("XYWTJG", "N", 9, 3);
  appendHeadField("ZSSJLX", "C", 1);
  appendHeadField("ZSWTSJ", "C", 6);
  appendHeadField("ZSBYZD", "N", 8, 0);
}

} // namespace msg
} // namespace bse
