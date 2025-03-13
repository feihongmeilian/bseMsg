#include "bse/msg/NQFGKSBXXDBFMsgFile.h"

namespace bse {
namespace msg {
NQFGKSBXXDBFMsgFile::NQFGKSBXXDBFMsgFile(const std::string &name)
    : dbf::DBFFile(name) {
  appendHeadField("FGKZQDM", "C", 6);
  appendHeadField("FGKJYDY", "C", 6);
  appendHeadField("FGKZQLB", "C", 2);
  appendHeadField("FGKSBLB", "C", 2);
  appendHeadField("FGKWTSL", "N", 12, 0);
  appendHeadField("FGKWTJG", "N", 9, 3);
  appendHeadField("FGKYDH", "N", 8, 0);
  appendHeadField("FGKWTSJ", "C", 6);
  appendHeadField("FGKJLZT", "C", 1);
  appendHeadField("FGKBYBZ", "C", 1);
}

} // namespace msg
} // namespace bse
