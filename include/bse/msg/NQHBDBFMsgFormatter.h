#ifndef BSE_MSG_N_Q_H_B_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_H_B_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQHBDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <> struct formatter<bse::msg::NQHBDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQHBDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(
        out,
        "CJHM : {} ZQDM : {} HTXH : {} ZQZH : {} CJSL : {} CJJG : {} CJSL2 : "
        "{} DFDY : {} DFZH : {} CJSJ : {} CJRQ : {} YWLB : {} CDYY : {} RZRQ : "
        "{} PCBZ : {} BYBZ : {} BYZD1 : {} BYZD2 : {} BYZD3 : {} ",
        p.cJHM(), p.zQDM(), p.hTXH(), p.zQZH(), p.cJSL(), p.cJJG(), p.cJSL2(),
        p.dFDY(), p.dFZH(), p.cJSJ(), p.cJRQ(), p.yWLB(), p.cDYY(), p.rZRQ(),
        p.pCBZ(), p.bYBZ(), p.bYZD1(), p.bYZD2(), p.bYZD3());
  }
};
} // namespace fmt

#endif
