#include "bse/msg/NQHQDBFMsgFile.h"

namespace bse {
namespace msg {
NQHQDBFMsgFile::NQHQDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("HQZQDM", "C", 6);
  appendHeadField("HQZQJC", "C", 8);
  appendHeadField("HQZRSP", "N", 9, 3);
  appendHeadField("HQJRKP", "N", 9, 3);
  appendHeadField("HQZJCJ", "N", 9, 3);
  appendHeadField("HQCJSL", "N", 12, 0);
  appendHeadField("HQCJJE", "N", 17, 3);
  appendHeadField("HQCJBS", "N", 9, 0);
  appendHeadField("HQZGCJ", "N", 9, 3);
  appendHeadField("HQZDCJ", "N", 9, 3);
  appendHeadField("HQSYL1", "N", 9, 4);
  appendHeadField("HQSYL2", "N", 9, 4);
  appendHeadField("HQJSD1", "N", 9, 3);
  appendHeadField("HQJSD2", "N", 9, 3);
  appendHeadField("HQHYCC", "N", 12, 0);
  appendHeadField("HQSJW5", "N", 9, 3);
  appendHeadField("HQSSL5", "N", 12, 0);
  appendHeadField("HQSJW4", "N", 9, 3);
  appendHeadField("HQSSL4", "N", 12, 0);
  appendHeadField("HQSJW3", "N", 9, 3);
  appendHeadField("HQSSL3", "N", 12, 0);
  appendHeadField("HQSJW2", "N", 9, 3);
  appendHeadField("HQSSL2", "N", 12, 0);
  appendHeadField("HQSJW1", "N", 9, 3);
  appendHeadField("HQSSL1", "N", 12, 0);
  appendHeadField("HQBJW1", "N", 9, 3);
  appendHeadField("HQBSL1", "N", 12, 0);
  appendHeadField("HQBJW2", "N", 9, 3);
  appendHeadField("HQBSL2", "N", 12, 0);
  appendHeadField("HQBJW3", "N", 9, 3);
  appendHeadField("HQBSL3", "N", 12, 0);
  appendHeadField("HQBJW4", "N", 9, 3);
  appendHeadField("HQBSL4", "N", 12, 0);
  appendHeadField("HQBJW5", "N", 9, 3);
  appendHeadField("HQBSL5", "N", 12, 0);
}

} // namespace msg
} // namespace bse
