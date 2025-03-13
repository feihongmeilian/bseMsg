#include "bse/msg/BJSBSDBFMsgFile.h"

namespace bse {
namespace msg {
BJSBSDBFMsgFile::BJSBSDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("BSZJJS", "C", 6);
  appendHeadField("BSYWLB", "C", 2);
  appendHeadField("BSWTLX", "C", 1);
  appendHeadField("BSWTXH", "C", 8);
  appendHeadField("BSZQDM", "C", 6);
  appendHeadField("BSGDDM", "C", 10);
  appendHeadField("BSXWDM", "C", 6);
  appendHeadField("BSYWSJ", "C", 30);
  appendHeadField("BSGFXZ", "C", 2);
  appendHeadField("BSWTSL", "N", 12, 0);
  appendHeadField("BSWTZJ", "N", 16, 3);
  appendHeadField("BSWTJG", "N", 9, 3);
  appendHeadField("BSBZ1", "C", 1);
  appendHeadField("BSBZ2", "C", 1);
  appendHeadField("BSDFXW", "C", 6);
  appendHeadField("BSDFGD", "C", 10);
  appendHeadField("BSDFXZ", "C", 2);
  appendHeadField("BSNR1", "C", 60);
  appendHeadField("BSNR2", "C", 120);
  appendHeadField("BSRQ1", "N", 8, 0);
  appendHeadField("BSRQ2", "N", 8, 0);
  appendHeadField("BSWTRQ", "D");
  appendHeadField("BSWTSJ", "C", 8);
  appendHeadField("BSCLBZ", "C", 1);
  appendHeadField("BSBYZD", "C", 1);
}

} // namespace msg
} // namespace bse
