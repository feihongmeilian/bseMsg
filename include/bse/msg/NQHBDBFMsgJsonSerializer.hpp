#ifndef BSE_MSG_N_Q_H_B_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_H_B_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQHBDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQHBDBFMsg> {
  static void from_json(const json &j, bse::msg::NQHBDBFMsg &msg) {
    if (j.contains("CJHM")) {
      msg.setCJHM(j["CJHM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CJHM field");
    }
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
    }
    if (j.contains("HTXH")) {
      msg.setHTXH(j["HTXH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain HTXH field");
    }
    if (j.contains("ZQZH")) {
      msg.setZQZH(j["ZQZH"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQZH field");
    }
    if (j.contains("CJSL")) {
      msg.setCJSL(j["CJSL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJSL field");
    }
    if (j.contains("CJJG")) {
      msg.setCJJG(j["CJJG"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJJG field");
    }
    if (j.contains("CJSL2")) {
      msg.setCJSL2(j["CJSL2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJSL2 field");
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
    if (j.contains("CJSJ")) {
      msg.setCJSJ(j["CJSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CJSJ field");
    }
    if (j.contains("CJRQ")) {
      msg.setCJRQ(j["CJRQ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CJRQ field");
    }
    if (j.contains("YWLB")) {
      msg.setYWLB(j["YWLB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWLB field");
    }
    if (j.contains("CDYY")) {
      msg.setCDYY(j["CDYY"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CDYY field");
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

  static void to_json(json &j, const bse::msg::NQHBDBFMsg &msg) {
    j["CJHM"] = msg.cJHM();
    j["ZQDM"] = msg.zQDM();
    j["HTXH"] = msg.hTXH();
    j["ZQZH"] = msg.zQZH();
    j["CJSL"] = msg.cJSL();
    j["CJJG"] = msg.cJJG();
    j["CJSL2"] = msg.cJSL2();
    j["DFDY"] = msg.dFDY();
    j["DFZH"] = msg.dFZH();
    j["CJSJ"] = msg.cJSJ();
    j["CJRQ"] = msg.cJRQ();
    j["YWLB"] = msg.yWLB();
    j["CDYY"] = msg.cDYY();
    j["RZRQ"] = msg.rZRQ();
    j["PCBZ"] = msg.pCBZ();
    j["BYBZ"] = msg.bYBZ();
    j["BYZD1"] = msg.bYZD1();
    j["BYZD2"] = msg.bYZD2();
    j["BYZD3"] = msg.bYZD3();
  }
};
} // namespace nlohmann

#endif
