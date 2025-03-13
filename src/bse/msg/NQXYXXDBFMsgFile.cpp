#include "bse/msg/NQXYXXDBFMsgFile.h"

namespace bse {
namespace msg {
NQXYXXDBFMsgFile::NQXYXXDBFMsgFile(const std::string &name)
    : dbf::DBFFile(name) {
  appendHeadField("XYZQDM", "C", 6);
  appendHeadField("XYJYDY", "C", 6);
  appendHeadField("WTYWLB", "C", 2);
  appendHeadField("XYWTSL", "N", 12, 0);
  appendHeadField("XYWTJG", "N", 9, 3);
  appendHeadField("XYYDH", "N", 8, 0);
  appendHeadField("XYWTSJ", "C", 6);
  appendHeadField("XYJLZT", "C", 1);
  appendHeadField("XYBYBZ", "C", 1);
}

} // namespace msg
} // namespace bse
