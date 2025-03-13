#include "bse/msg/NQHBDBFMsgFile.h"

namespace bse {
namespace msg {
NQHBDBFMsgFile::NQHBDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("HBCJHM", "C", 8);
  appendHeadField("HBZQDM", "C", 6);
  appendHeadField("HBHTXH", "C", 22);
  appendHeadField("HBZQZH", "C", 10);
  appendHeadField("HBCJSL", "N", 10, 0);
  appendHeadField("HBCJJG", "N", 9, 3);
  appendHeadField("HBCJSL2", "N", 10, 0);
  appendHeadField("HBDFDY", "C", 6);
  appendHeadField("HBDFZH", "C", 10);
  appendHeadField("HBCJSJ", "C", 8);
  appendHeadField("HBCJRQ", "D", 8);
  appendHeadField("HBYWLB", "C", 2);
  appendHeadField("HBCDYY", "C", 2);
  appendHeadField("HBRZRQ", "C", 1);
  appendHeadField("HBPCBZ", "C", 1);
  appendHeadField("HBBYBZ", "C", 1);
  appendHeadField("HBBYZD1", "N", 19, 3);
  appendHeadField("HBBYZD2", "N", 19, 3);
  appendHeadField("HBBYZD3", "C", 40);
}

} // namespace msg
} // namespace bse
