#ifndef BSE_MSG_N_Q_W_T_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_W_T_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQWTDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <> struct formatter<bse::msg::NQWTDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQWTDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(out,
                     "HTXH : {} ZQDM : {} ZQZH : {} WTSL : {} WTJG : {} YWLB : "
                     "{} DFDY : {} DFZH : {} WTSL2 : {} WTJG2 : {} LXR : {} "
                     "LXFS : {} YDH : {} RZRQ : {} PCBZ : {} WTSJ : {} CLBZ : "
                     "{} BYBZ : {} BYZD1 : {} BYZD2 : {} BYZD3 : {} ",
                     p.hTXH(), p.zQDM(), p.zQZH(), p.wTSL(), p.wTJG(), p.yWLB(),
                     p.dFDY(), p.dFZH(), p.wTSL2(), p.wTJG2(), p.lXR(),
                     p.lXFS(), p.yDH(), p.rZRQ(), p.pCBZ(), p.wTSJ(), p.cLBZ(),
                     p.bYBZ(), p.bYZD1(), p.bYZD2(), p.bYZD3());
  }
};
} // namespace fmt

#endif
