#ifndef BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQZSXXDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQZSXXDBFMsg> {
  static void from_json(const json &j, bse::msg::NQZSXXDBFMsg &msg) {
    if (j.contains("ZQDM")) {
      msg.setZQDM(j["ZQDM"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQDM field");
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
    if (j.contains("SJLX")) {
      msg.setSJLX(j["SJLX"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain SJLX field");
    }
    if (j.contains("WTSJ")) {
      msg.setWTSJ(j["WTSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain WTSJ field");
    }
    if (j.contains("BYZD")) {
      msg.setBYZD(j["BYZD"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYZD field");
    }
  }

  static void to_json(json &j, const bse::msg::NQZSXXDBFMsg &msg) {
    j["ZQDM"] = msg.zQDM();
    j["YWLB"] = msg.yWLB();
    j["WTSL"] = msg.wTSL();
    j["WTJG"] = msg.wTJG();
    j["SJLX"] = msg.sJLX();
    j["WTSJ"] = msg.wTSJ();
    j["BYZD"] = msg.bYZD();
  }
};
} // namespace nlohmann

#endif
