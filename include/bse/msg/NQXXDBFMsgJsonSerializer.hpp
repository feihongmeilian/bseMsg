#ifndef BSE_MSG_N_Q_X_X_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_X_X_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQXXDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQXXDBFMsg> {
  static void from_json(const json &j, bse::msg::NQXXDBFMsg &msg) {
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
    }
    if (j.contains("ZQJC")) {
      msg.setZQJC(j["ZQJC"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQJC field");
    }
    if (j.contains("YWJC")) {
      msg.setYWJC(j["YWJC"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWJC field");
    }
    if (j.contains("JCZQ")) {
      msg.setJCZQ(j["JCZQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain JCZQ field");
    }
    if (j.contains("ISIN")) {
      msg.setISIN(j["ISIN"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ISIN field");
    }
    if (j.contains("ZRDW")) {
      msg.setZRDW(j["ZRDW"].get<int16_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZRDW field");
    }
    if (j.contains("HYZL")) {
      msg.setHYZL(j["HYZL"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain HYZL field");
    }
    if (j.contains("HBZL")) {
      msg.setHBZL(j["HBZL"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain HBZL field");
    }
    if (j.contains("MGMZ")) {
      msg.setMGMZ(j["MGMZ"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain MGMZ field");
    }
    if (j.contains("ZGB")) {
      msg.setZGB(j["ZGB"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZGB field");
    }
    if (j.contains("FXSGB")) {
      msg.setFXSGB(j["FXSGB"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain FXSGB field");
    }
    if (j.contains("SNSY")) {
      msg.setSNSY(j["SNSY"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SNSY field");
    }
    if (j.contains("BNSY")) {
      msg.setBNSY(j["BNSY"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BNSY field");
    }
    if (j.contains("JSFL")) {
      msg.setJSFL(j["JSFL"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain JSFL field");
    }
    if (j.contains("YHSL")) {
      msg.setYHSL(j["YHSL"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain YHSL field");
    }
    if (j.contains("GHFL")) {
      msg.setGHFL(j["GHFL"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain GHFL field");
    }
    if (j.contains("GPRQ")) {
      msg.setGPRQ(j["GPRQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain GPRQ field");
    }
    if (j.contains("ZQQXR")) {
      msg.setZQQXR(j["ZQQXR"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQQXR field");
    }
    if (j.contains("DQR")) {
      msg.setDQR(j["DQR"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DQR field");
    }
    if (j.contains("MBXL")) {
      msg.setMBXL(j["MBXL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain MBXL field");
    }
    if (j.contains("BLDW")) {
      msg.setBLDW(j["BLDW"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BLDW field");
    }
    if (j.contains("SLDW")) {
      msg.setSLDW(j["SLDW"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SLDW field");
    }
    if (j.contains("ZXSBSL")) {
      msg.setZXSBSL(j["ZXSBSL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZXSBSL field");
    }
    if (j.contains("JGDW")) {
      msg.setJGDW(j["JGDW"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain JGDW field");
    }
    if (j.contains("SBCS")) {
      msg.setSBCS(j["SBCS"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SBCS field");
    }
    if (j.contains("HXCS")) {
      msg.setHXCS(j["HXCS"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain HXCS field");
    }
    if (j.contains("XJXZ")) {
      msg.setXJXZ(j["XJXZ"].get<int8_t>());
    } else {
      throw std::invalid_argument("JSON does not contain XJXZ field");
    }
    if (j.contains("ZTJG")) {
      msg.setZTJG(j["ZTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZTJG field");
    }
    if (j.contains("DTJG")) {
      msg.setDTJG(j["DTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain DTJG field");
    }
    if (j.contains("DZZTJG")) {
      msg.setDZZTJG(j["DZZTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain DZZTJG field");
    }
    if (j.contains("DZDTJG")) {
      msg.setDZDTJG(j["DZDTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain DZDTJG field");
    }
    if (j.contains("CFGBZ")) {
      msg.setCFGBZ(j["CFGBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CFGBZ field");
    }
    if (j.contains("ZHBL")) {
      msg.setZHBL(j["ZHBL"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZHBL field");
    }
    if (j.contains("ZRZT")) {
      msg.setZRZT(j["ZRZT"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZRZT field");
    }
    if (j.contains("ZQJB")) {
      msg.setZQJB(j["ZQJB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQJB field");
    }
    if (j.contains("ZRLX")) {
      msg.setZRLX(j["ZRLX"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZRLX field");
    }
    if (j.contains("ZSSSL")) {
      msg.setZSSSL(j["ZSSSL"].get<int16_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZSSSL field");
    }
    if (j.contains("TPBZ")) {
      msg.setTPBZ(j["TPBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain TPBZ field");
    }
    if (j.contains("CQCX")) {
      msg.setCQCX(j["CQCX"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CQCX field");
    }
    if (j.contains("WLTP")) {
      msg.setWLTP(j["WLTP"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WLTP field");
    }
    if (j.contains("QTYW")) {
      msg.setQTYW(j["QTYW"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain QTYW field");
    }
    if (j.contains("JYS")) {
      msg.setJYS(j["JYS"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain JYS field");
    }
    if (j.contains("FCBZ")) {
      msg.setFCBZ(j["FCBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain FCBZ field");
    }
    if (j.contains("RZBD")) {
      msg.setRZBD(j["RZBD"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain RZBD field");
    }
    if (j.contains("RQBD")) {
      msg.setRQBD(j["RQBD"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain RQBD field");
    }
    if (j.contains("DRRZ")) {
      msg.setDRRZ(j["DRRZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DRRZ field");
    }
    if (j.contains("DRRQ")) {
      msg.setDRRQ(j["DRRQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DRRQ field");
    }
    if (j.contains("GXSJ")) {
      msg.setGXSJ(j["GXSJ"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain GXSJ field");
    }
  }

  static void to_json(json &j, const bse::msg::NQXXDBFMsg &msg) {
    j["ZQDM"] = msg.zQDM();
    j["ZQJC"] = msg.zQJC();
    j["YWJC"] = msg.yWJC();
    j["JCZQ"] = msg.jCZQ();
    j["ISIN"] = msg.iSIN();
    j["ZRDW"] = msg.zRDW();
    j["HYZL"] = msg.hYZL();
    j["HBZL"] = msg.hBZL();
    j["MGMZ"] = msg.mGMZ();
    j["ZGB"] = msg.zGB();
    j["FXSGB"] = msg.fXSGB();
    j["SNSY"] = msg.sNSY();
    j["BNSY"] = msg.bNSY();
    j["JSFL"] = msg.jSFL();
    j["YHSL"] = msg.yHSL();
    j["GHFL"] = msg.gHFL();
    j["GPRQ"] = msg.gPRQ();
    j["ZQQXR"] = msg.zQQXR();
    j["DQR"] = msg.dQR();
    j["MBXL"] = msg.mBXL();
    j["BLDW"] = msg.bLDW();
    j["SLDW"] = msg.sLDW();
    j["ZXSBSL"] = msg.zXSBSL();
    j["JGDW"] = msg.jGDW();
    j["SBCS"] = msg.sBCS();
    j["HXCS"] = msg.hXCS();
    j["XJXZ"] = msg.xJXZ();
    j["ZTJG"] = msg.zTJG();
    j["DTJG"] = msg.dTJG();
    j["DZZTJG"] = msg.dZZTJG();
    j["DZDTJG"] = msg.dZDTJG();
    j["CFGBZ"] = msg.cFGBZ();
    j["ZHBL"] = msg.zHBL();
    j["ZRZT"] = msg.zRZT();
    j["ZQJB"] = msg.zQJB();
    j["ZRLX"] = msg.zRLX();
    j["ZSSSL"] = msg.zSSSL();
    j["TPBZ"] = msg.tPBZ();
    j["CQCX"] = msg.cQCX();
    j["WLTP"] = msg.wLTP();
    j["QTYW"] = msg.qTYW();
    j["JYS"] = msg.jYS();
    j["FCBZ"] = msg.fCBZ();
    j["RZBD"] = msg.rZBD();
    j["RQBD"] = msg.rQBD();
    j["DRRZ"] = msg.dRRZ();
    j["DRRQ"] = msg.dRRQ();
    j["GXSJ"] = msg.gXSJ();
  }
};
} // namespace nlohmann

#endif
