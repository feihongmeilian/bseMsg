#ifndef BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQXYXXDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <>
struct formatter<bse::msg::NQXYXXDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQXYXXDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(out,
                     "ZQDM : {} JYDY : {} YWLB : {} WTSL : {} WTJG : {} YDH : "
                     "{} WTSJ : {} JLZT : {} BYBZ : {} ",
                     p.zQDM(), p.jYDY(), p.yWLB(), p.wTSL(), p.wTJG(), p.yDH(),
                     p.wTSJ(), p.jLZT(), p.bYBZ());
  }
};
} // namespace fmt

#endif
