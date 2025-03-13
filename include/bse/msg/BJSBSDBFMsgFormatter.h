#ifndef BSE_MSG_B_J_S_B_S_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_B_J_S_B_S_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/BJSBSDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <>
struct formatter<bse::msg::BJSBSDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::BJSBSDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(
        out,
        "ZJJS : {} YWLB : {} WTLX : {} WTXH : {} ZQDM : {} GDDM : {} XWDM : {} "
        "YWSJ : {} GFXZ : {} WTSL : {} WTZJ : {} WTJG : {} BZ1 : {} BZ2 : {} "
        "DFXW : {} DFGD : {} DFXZ : {} NR1 : {} NR2 : {} RQ1 : {} RQ2 : {} "
        "WTRQ : {} WTSJ : {} CLBZ : {} BYZD : {} ",
        p.zJJS(), p.yWLB(), p.wTLX(), p.wTXH(), p.zQDM(), p.gDDM(), p.xWDM(),
        p.yWSJ(), p.gFXZ(), p.wTSL(), p.wTZJ(), p.wTJG(), p.bZ1(), p.bZ2(),
        p.dFXW(), p.dFGD(), p.dFXZ(), p.nR1(), p.nR2(), p.rQ1(), p.rQ2(),
        p.wTRQ(), p.wTSJ(), p.cLBZ(), p.bYZD());
  }
};
} // namespace fmt

#endif
