#ifndef BSE_MSG_N_Q_X_X_D_B_F_MSG_FORMATTER_H
#define BSE_MSG_N_Q_X_X_D_B_F_MSG_FORMATTER_H

#include <fmt/format.h>
#include <fmt/ranges.h>

#include "bse/msg/NQXXDBFMsg.h"
#include "dbf/DBFRecordFormatter.h"

namespace fmt {
using namespace bse::msg;
template <> struct formatter<bse::msg::NQXXDBFMsg> : formatter<dbf::DBFRecord> {
  template <typename FormatContext>
  auto format(const bse::msg::NQXXDBFMsg &p, FormatContext &ctx) const
      -> decltype(ctx.out()) {
    auto out = formatter<dbf::DBFRecord>::format(p, ctx);
    return format_to(
        out,
        "ZQDM : {} ZQJC : {} YWJC : {} JCZQ : {} ISIN : {} ZRDW : {} HYZL : {} "
        "HBZL : {} MGMZ : {} ZGB : {} FXSGB : {} SNSY : {} BNSY : {} JSFL : {} "
        "YHSL : {} GHFL : {} GPRQ : {} ZQQXR : {} DQR : {} MBXL : {} BLDW : {} "
        "SLDW : {} ZXSBSL : {} JGDW : {} SBCS : {} HXCS : {} XJXZ : {} ZTJG : "
        "{} DTJG : {} DZZTJG : {} DZDTJG : {} CFGBZ : {} ZHBL : {} ZRZT : {} "
        "ZQJB : {} ZRLX : {} ZSSSL : {} TPBZ : {} CQCX : {} WLTP : {} QTYW : "
        "{} JYS : {} FCBZ : {} RZBD : {} RQBD : {} DRRZ : {} DRRQ : {} GXSJ : "
        "{} ",
        p.zQDM(), p.zQJC(), p.yWJC(), p.jCZQ(), p.iSIN(), p.zRDW(), p.hYZL(),
        p.hBZL(), p.mGMZ(), p.zGB(), p.fXSGB(), p.sNSY(), p.bNSY(), p.jSFL(),
        p.yHSL(), p.gHFL(), p.gPRQ(), p.zQQXR(), p.dQR(), p.mBXL(), p.bLDW(),
        p.sLDW(), p.zXSBSL(), p.jGDW(), p.sBCS(), p.hXCS(), p.xJXZ(), p.zTJG(),
        p.dTJG(), p.dZZTJG(), p.dZDTJG(), p.cFGBZ(), p.zHBL(), p.zRZT(),
        p.zQJB(), p.zRLX(), p.zSSSL(), p.tPBZ(), p.cQCX(), p.wLTP(), p.qTYW(),
        p.jYS(), p.fCBZ(), p.rZBD(), p.rQBD(), p.dRRZ(), p.dRRQ(), p.gXSJ());
  }
};
} // namespace fmt

#endif
