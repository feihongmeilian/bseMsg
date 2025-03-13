#include "bse/msg/NQWTDBFMsgFile.h"

namespace bse {
namespace msg {
NQWTDBFMsgFile::NQWTDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("WTHTXH", "C", 22);
  appendHeadField("WTZQDM", "C", 6);
  appendHeadField("WTZQZH", "C", 10);
  appendHeadField("WTWTSL", "N", 9, 0);
  appendHeadField("WTWTJG", "N", 9, 3);
  appendHeadField("WTYWLB", "C", 2);
  appendHeadField("WTDFDY", "C", 6);
  appendHeadField("WTDFZH", "C", 10);
  appendHeadField("WTWTSL2", "N", 9, 0);
  appendHeadField("WTWTJG2", "N", 9, 3);
  appendHeadField("WTLXR", "C", 12);
  appendHeadField("WTLXFS", "C", 30);
  appendHeadField("WTYDH", "N", 8, 0);
  appendHeadField("WTRZRQ", "C", 1);
  appendHeadField("WTPCBZ", "C", 1);
  appendHeadField("WTWTSJ", "C", 6);
  appendHeadField("WTCLBZ", "C", 1);
  appendHeadField("WTBYBZ", "C", 1);
  appendHeadField("WTBYZD1", "N", 19, 3);
  appendHeadField("WTBYZD2", "N", 19, 3);
  appendHeadField("WTBYZD3", "C", 40);
}

} // namespace msg
} // namespace bse
