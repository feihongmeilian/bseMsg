#include "bse/msg/NQFGKCJXXDBFMsgFile.h"

namespace bse {
namespace msg {
NQFGKCJXXDBFMsgFile::NQFGKCJXXDBFMsgFile(const std::string &name)
    : dbf::DBFFile(name) {
  appendHeadField("FGKCJXH", "N", 8);
  appendHeadField("FGKZQDM", "C", 6);
  appendHeadField("FGKZQJC", "C", 8);
  appendHeadField("FGKZQLB", "C", 2);
  appendHeadField("FGKBJYDY", "C", 6);
  appendHeadField("FGKBDYMC", "C", 128);
  appendHeadField("FGKSJYDY", "C", 6);
  appendHeadField("FGKSDYMC", "C", 128);
  appendHeadField("FGKCJSL", "N", 12, 0);
  appendHeadField("FGKCJJG", "N", 9, 3);
  appendHeadField("FGKCJSJ", "C", 6);
  appendHeadField("FGKBYBZ", "C", 1);
}

} // namespace msg
} // namespace bse
