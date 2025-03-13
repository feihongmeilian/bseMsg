#ifndef BSE_MSG_N_Q_H_Q_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_H_Q_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQHQDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <> struct formatter<bse::msg::NQHQDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQHQDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(
        out,
        "ZQDM : {} ZQJC : {} ZRSP : {} JRKP : {} ZJCJ : {} CJSL : {} CJJE : {} "
        "CJBS : {} ZGCJ : {} ZDCJ : {} SYL1 : {} SYL2 : {} JSD1 : {} JSD2 : {} "
        "HYCC : {} SJW5 : {} SSL5 : {} SJW4 : {} SSL4 : {} SJW3 : {} SSL3 : {} "
        "SJW2 : {} SSL2 : {} SJW1 : {} SSL1 : {} BJW1 : {} BSL1 : {} BJW2 : {} "
        "BSL2 : {} BJW3 : {} BSL3 : {} BJW4 : {} BSL4 : {} BJW5 : {} BSL5 : "
        "{} ",
        p.zQDM(), p.zQJC(), p.zRSP(), p.jRKP(), p.zJCJ(), p.cJSL(), p.cJJE(),
        p.cJBS(), p.zGCJ(), p.zDCJ(), p.sYL1(), p.sYL2(), p.jSD1(), p.jSD2(),
        p.hYCC(), p.sJW5(), p.sSL5(), p.sJW4(), p.sSL4(), p.sJW3(), p.sSL3(),
        p.sJW2(), p.sSL2(), p.sJW1(), p.sSL1(), p.bJW1(), p.bSL1(), p.bJW2(),
        p.bSL2(), p.bJW3(), p.bSL3(), p.bJW4(), p.bSL4(), p.bJW5(), p.bSL5());
  }
};
} // namespace fmt

#endif
