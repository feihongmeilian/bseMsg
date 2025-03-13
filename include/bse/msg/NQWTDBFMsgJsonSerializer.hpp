#ifndef BSE_MSG_N_Q_W_T_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_W_T_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQWTDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQWTDBFMsg> {
  static void from_json(const json &j, bse::msg::NQWTDBFMsg &msg) {
    if (j.contains("HTXH")) {
      msg.setHTXH(j["HTXH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain HTXH field");
    }
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
    }
    if (j.contains("ZQZH")) {
      msg.setZQZH(j["ZQZH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQZH field");
    }
    if (j.contains("WTSL")) {
      msg.setWTSL(j["WTSL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSL field");
    }
    if (j.contains("WTJG")) {
      msg.setWTJG(j["WTJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTJG field");
    }
    if (j.contains("YWLB")) {
      msg.setYWLB(j["YWLB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWLB field");
    }
    if (j.contains("DFDY")) {
      msg.setDFDY(j["DFDY"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DFDY field");
    }
    if (j.contains("DFZH")) {
      msg.setDFZH(j["DFZH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain DFZH field");
    }
    if (j.contains("WTSL2")) {
      msg.setWTSL2(j["WTSL2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSL2 field");
    }
    if (j.contains("WTJG2")) {
      msg.setWTJG2(j["WTJG2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain WTJG2 field");
    }
    if (j.contains("LXR")) {
      msg.setLXR(j["LXR"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain LXR field");
    }
    if (j.contains("LXFS")) {
      msg.setLXFS(j["LXFS"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain LXFS field");
    }
    if (j.contains("YDH")) {
      msg.setYDH(j["YDH"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain YDH field");
    }
    if (j.contains("RZRQ")) {
      msg.setRZRQ(j["RZRQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain RZRQ field");
    }
    if (j.contains("PCBZ")) {
      msg.setPCBZ(j["PCBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain PCBZ field");
    }
    if (j.contains("WTSJ")) {
      msg.setWTSJ(j["WTSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSJ field");
    }
    if (j.contains("CLBZ")) {
      msg.setCLBZ(j["CLBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CLBZ field");
    }
    if (j.contains("BYBZ")) {
      msg.setBYBZ(j["BYBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYBZ field");
    }
    if (j.contains("BYZD1")) {
      msg.setBYZD1(j["BYZD1"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYZD1 field");
    }
    if (j.contains("BYZD2")) {
      msg.setBYZD2(j["BYZD2"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYZD2 field");
    }
    if (j.contains("BYZD3")) {
      msg.setBYZD3(j["BYZD3"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYZD3 field");
    }
  }

  static void to_json(json &j, const bse::msg::NQWTDBFMsg &msg) {
    j["HTXH"] = msg.hTXH();
    j["ZQDM"] = msg.zQDM();
    j["ZQZH"] = msg.zQZH();
    j["WTSL"] = msg.wTSL();
    j["WTJG"] = msg.wTJG();
    j["YWLB"] = msg.yWLB();
    j["DFDY"] = msg.dFDY();
    j["DFZH"] = msg.dFZH();
    j["WTSL2"] = msg.wTSL2();
    j["WTJG2"] = msg.wTJG2();
    j["LXR"] = msg.lXR();
    j["LXFS"] = msg.lXFS();
    j["YDH"] = msg.yDH();
    j["RZRQ"] = msg.rZRQ();
    j["PCBZ"] = msg.pCBZ();
    j["WTSJ"] = msg.wTSJ();
    j["CLBZ"] = msg.cLBZ();
    j["BYBZ"] = msg.bYBZ();
    j["BYZD1"] = msg.bYZD1();
    j["BYZD2"] = msg.bYZD2();
    j["BYZD3"] = msg.bYZD3();
  }
};
} // namespace nlohmann

#endif
