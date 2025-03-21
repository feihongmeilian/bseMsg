#ifndef BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_X_Y_X_X_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQXYXXDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQXYXXDBFMsg> {
  static void from_json(const json &j, bse::msg::NQXYXXDBFMsg &msg) {
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
    }
    if (j.contains("JYDY")) {
      msg.setJYDY(j["JYDY"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain JYDY field");
    }
    if (j.contains("YWLB")) {
      msg.setYWLB(j["YWLB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain YWLB field");
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
    if (j.contains("YDH")) {
      msg.setYDH(j["YDH"].get<int32_t>());
    } else {
      throw std::invalid_argument("JSON does not contain YDH field");
    }
    if (j.contains("WTSJ")) {
      msg.setWTSJ(j["WTSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSJ field");
    }
    if (j.contains("JLZT")) {
      msg.setJLZT(j["JLZT"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain JLZT field");
    }
    if (j.contains("BYBZ")) {
      msg.setBYBZ(j["BYBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYBZ field");
    }
  }

  static void to_json(json &j, const bse::msg::NQXYXXDBFMsg &msg) {
    j["ZQDM"] = msg.zQDM();
    j["JYDY"] = msg.jYDY();
    j["YWLB"] = msg.yWLB();
    j["WTSL"] = msg.wTSL();
    j["WTJG"] = msg.wTJG();
    j["YDH"] = msg.yDH();
    j["WTSJ"] = msg.wTSJ();
    j["JLZT"] = msg.jLZT();
    j["BYBZ"] = msg.bYBZ();
  }
};
} // namespace nlohmann

#endif
