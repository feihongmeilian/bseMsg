#include "bse/msg/NQXXDBFMsgFile.h"

namespace bse {
namespace msg {
NQXXDBFMsgFile::NQXXDBFMsgFile(const std::string &name) : dbf::DBFFile(name) {
  appendHeadField("XXZQDM", "C", 6);
  appendHeadField("XXZQJC", "C", 8);
  appendHeadField("XXYWJC", "C", 20);
  appendHeadField("XXJCZQ", "C", 6);
  appendHeadField("XXISIN", "C", 12);
  appendHeadField("XXZRDW", "N", 4, 0);
  appendHeadField("XXHYZL", "C", 5);
  appendHeadField("XXHBZL", "C", 2);
  appendHeadField("XXMGMZ", "N", 7, 2);
  appendHeadField("XXZGB", "N", 12, 0);
  appendHeadField("XXFXSGB", "N", 12, 0);
  appendHeadField("XXSNSY", "N", 9, 4);
  appendHeadField("XXBNSY", "N", 9, 4);
  appendHeadField("XXJSFL", "N", 7, 6);
  appendHeadField("XXYHSL", "N", 7, 6);
  appendHeadField("XXGHFL", "N", 7, 6);
  appendHeadField("XXGPRQ", "D", 8);
  appendHeadField("XXZQQXR", "D", 8);
  appendHeadField("XXDQR", "D", 8);
  appendHeadField("XXMBXL", "N", 9, 0);
  appendHeadField("XXBLDW", "N", 6, 0);
  appendHeadField("XXSLDW", "N", 6, 0);
  appendHeadField("XXZXSBSL", "N", 9, 0);
  appendHeadField("XXJGDW", "N", 5, 3);
  appendHeadField("XXSBCS", "N", 7, 3);
  appendHeadField("XXHXCS", "N", 7, 3);
  appendHeadField("XXXJXZ", "N", 1, 0);
  appendHeadField("XXZTJG", "N", 9, 3);
  appendHeadField("XXDTJG", "N", 9, 3);
  appendHeadField("XXDZZTJG", "N", 9, 3);
  appendHeadField("XXDZDTJG", "N", 9, 3);
  appendHeadField("XXCFGBZ", "C", 1);
  appendHeadField("XXZHBL", "N", 5, 2);
  appendHeadField("XXZRZT", "C", 1);
  appendHeadField("XXZQJB", "C", 1);
  appendHeadField("XXZRLX", "C", 1);
  appendHeadField("XXZSSSL", "N", 4, 0);
  appendHeadField("XXTPBZ", "C", 1);
  appendHeadField("XXCQCX", "C", 1);
  appendHeadField("XXWLTP", "C", 1);
  appendHeadField("XXQTYW", "C", 4);
  appendHeadField("XXJYS", "C", 2);
  appendHeadField("XXFCBZ", "C", 1);
  appendHeadField("XXRZBD", "C", 1);
  appendHeadField("XXRQBD", "C", 1);
  appendHeadField("XXDRRZ", "C", 1);
  appendHeadField("XXDRRQ", "C", 1);
  appendHeadField("XXGXSJ", "N", 6, 0);
}

} // namespace msg
} // namespace bse
