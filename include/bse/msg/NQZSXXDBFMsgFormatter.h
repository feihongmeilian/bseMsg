#ifndef BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQZSXXDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <>
struct formatter<bse::msg::NQZSXXDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQZSXXDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(out,
                     "ZQDM : {} YWLB : {} WTSL : {} WTJG : {} SJLX : {} WTSJ : "
                     "{} BYZD : {} ",
                     p.zQDM(), p.yWLB(), p.wTSL(), p.wTJG(), p.sJLX(), p.wTSJ(),
                     p.bYZD());
  }
};
} // namespace fmt

#endif
