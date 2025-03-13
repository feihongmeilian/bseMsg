#ifndef BSE_MSG_B_J_S_Q_R_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_B_J_S_Q_R_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "BJSQRDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::BJSQRDBFMsg> {
  static void from_json(const json &j, bse::msg::BJSQRDBFMsg &msg) {
    if (j.contains("LSHM")) {
      msg.setLSHM(j["LSHM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain LSHM field");
    }
    if (j.contains("ZJJS")) {
      msg.setZJJS(j["ZJJS"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZJJS field");
    }
    if (j.contains("YWLB")) {
      msg.setYWLB(j["YWLB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWLB field");
    }
    if (j.contains("WTLX")) {
      msg.setWTLX(j["WTLX"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTLX field");
    }
    if (j.contains("WTXH")) {
      msg.setWTXH(j["WTXH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTXH field");
    }
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
    }
    if (j.contains("GDDM")) {
      msg.setGDDM(j["GDDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain GDDM field");
    }
    if (j.contains("XWDM")) {
      msg.setXWDM(j["XWDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain XWDM field");
    }
    if (j.contains("YWSJ")) {
      msg.setYWSJ(j["YWSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWSJ field");
    }
    if (j.contains("GFXZ")) {
      msg.setGFXZ(j["GFXZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain GFXZ field");
    }
    if (j.contains("WTSL")) {
      msg.setWTSL(j["WTSL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSL field");
    }
    if (j.contains("WTZJ")) {
      msg.setWTZJ(j["WTZJ"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTZJ field");
    }
    if (j.contains("WTJG")) {
      msg.setWTJG(j["WTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTJG field");
    }
    if (j.contains("BZ1")) {
      msg.setBZ1(j["BZ1"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BZ1 field");
    }
    if (j.contains("BZ2")) {
      msg.setBZ2(j["BZ2"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BZ2 field");
    }
    if (j.contains("DFXW")) {
      msg.setDFXW(j["DFXW"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DFXW field");
    }
    if (j.contains("DFGD")) {
      msg.setDFGD(j["DFGD"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DFGD field");
    }
    if (j.contains("DFXZ")) {
      msg.setDFXZ(j["DFXZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DFXZ field");
    }
    if (j.contains("NR1")) {
      msg.setNR1(j["NR1"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain NR1 field");
    }
    if (j.contains("NR2")) {
      msg.setNR2(j["NR2"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain NR2 field");
    }
    if (j.contains("RQ1")) {
      msg.setRQ1(j["RQ1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain RQ1 field");
    }
    if (j.contains("RQ2")) {
      msg.setRQ2(j["RQ2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain RQ2 field");
    }
    if (j.contains("WTRQ")) {
      msg.setWTRQ(j["WTRQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTRQ field");
    }
    if (j.contains("WTSJ")) {
      msg.setWTSJ(j["WTSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSJ field");
    }
    if (j.contains("CWDH")) {
      msg.setCWDH(j["CWDH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CWDH field");
    }
    if (j.contains("QSBZ")) {
      msg.setQSBZ(j["QSBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain QSBZ field");
    }
  }

  static void to_json(json &j, const bse::msg::BJSQRDBFMsg &msg) {
    j["LSHM"] = msg.lSHM();
    j["ZJJS"] = msg.zJJS();
    j["YWLB"] = msg.yWLB();
    j["WTLX"] = msg.wTLX();
    j["WTXH"] = msg.wTXH();
    j["ZQDM"] = msg.zQDM();
    j["GDDM"] = msg.gDDM();
    j["XWDM"] = msg.xWDM();
    j["YWSJ"] = msg.yWSJ();
    j["GFXZ"] = msg.gFXZ();
    j["WTSL"] = msg.wTSL();
    j["WTZJ"] = msg.wTZJ();
    j["WTJG"] = msg.wTJG();
    j["BZ1"] = msg.bZ1();
    j["BZ2"] = msg.bZ2();
    j["DFXW"] = msg.dFXW();
    j["DFGD"] = msg.dFGD();
    j["DFXZ"] = msg.dFXZ();
    j["NR1"] = msg.nR1();
    j["NR2"] = msg.nR2();
    j["RQ1"] = msg.rQ1();
    j["RQ2"] = msg.rQ2();
    j["WTRQ"] = msg.wTRQ();
    j["WTSJ"] = msg.wTSJ();
    j["CWDH"] = msg.cWDH();
    j["QSBZ"] = msg.qSBZ();
  }
};
} // namespace nlohmann

#endif
