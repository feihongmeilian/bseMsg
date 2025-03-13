#include "bse/msg/BJSQRDBFMsgFile.h"

namespace bse {
namespace msg {
BJSQRDBFMsgFile::BJSQRDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("QRLSHM", "C", 10);
  appendHeadField("QRZJJS", "C", 6);
  appendHeadField("QRYWLB", "C", 2);
  appendHeadField("QRWTLX", "C", 1);
  appendHeadField("QRWTXH", "C", 8);
  appendHeadField("QRZQDM", "C", 6);
  appendHeadField("QRGDDM", "C", 10);
  appendHeadField("QRXWDM", "C", 6);
  appendHeadField("QRYWSJ", "C", 30);
  appendHeadField("QRGFXZ", "C", 2);
  appendHeadField("QRWTSL", "N", 12, 0);
  appendHeadField("QRWTZJ", "N", 16, 3);
  appendHeadField("QRWTJG", "N", 9, 3);
  appendHeadField("QRBZ1", "C", 1);
  appendHeadField("QRBZ2", "C", 1);
  appendHeadField("QRDFXW", "C", 6);
  appendHeadField("QRDFGD", "C", 10);
  appendHeadField("QRDFXZ", "C", 2);
  appendHeadField("QRNR1", "C", 60);
  appendHeadField("QRNR2", "C", 120);
  appendHeadField("QRRQ1", "N", 8, 0);
  appendHeadField("QRRQ2", "N", 8, 0);
  appendHeadField("QRWTRQ", "D");
  appendHeadField("QRWTSJ", "C", 8);
  appendHeadField("QRCWDH", "C", 3);
  appendHeadField("QRQSBZ", "C", 1);
}

} // namespace msg
} // namespace bse
