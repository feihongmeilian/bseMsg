#ifndef BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQFGKCJXXDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <>
struct formatter<bse::msg::NQFGKCJXXDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQFGKCJXXDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(
        out,
        "CJXH : {} ZQDM : {} ZQJC : {} ZQLB : {} BJYDY : {} BDYMC : {} SJYDY : "
        "{} SDYMC : {} CJSL : {} CJJG : {} CJSJ : {} BYBZ : {} ",
        p.cJXH(), p.zQDM(), p.zQJC(), p.zQLB(), p.bJYDY(), p.bDYMC(), p.sJYDY(),
        p.sDYMC(), p.cJSL(), p.cJJG(), p.cJSJ(), p.bYBZ());
  }
};
} // namespace fmt

#endif
