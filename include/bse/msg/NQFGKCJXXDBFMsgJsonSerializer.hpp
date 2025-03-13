#ifndef BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQFGKCJXXDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQFGKCJXXDBFMsg> {
  static void from_json(const json &j, bse::msg::NQFGKCJXXDBFMsg &msg) {
    if (j.contains("CJXH")) {
      msg.setCJXH(j["CJXH"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJXH field");
    }
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
    if (j.contains("ZQLB")) {
      msg.setZQLB(j["ZQLB"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain ZQLB field");
    }
    if (j.contains("BJYDY")) {
      msg.setBJYDY(j["BJYDY"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BJYDY field");
    }
    if (j.contains("BDYMC")) {
      msg.setBDYMC(j["BDYMC"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BDYMC field");
    }
    if (j.contains("SJYDY")) {
      msg.setSJYDY(j["SJYDY"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain SJYDY field");
    }
    if (j.contains("SDYMC")) {
      msg.setSDYMC(j["SDYMC"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain SDYMC field");
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
    if (j.contains("CJSJ")) {
      msg.setCJSJ(j["CJSJ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain CJSJ field");
    }
    if (j.contains("BYBZ")) {
      msg.setBYBZ(j["BYBZ"].get<std::string>());
    } else {
      throw std::invalid_argument("JSON does not contain BYBZ field");
    }
  }

  static void to_json(json &j, const bse::msg::NQFGKCJXXDBFMsg &msg) {
    j["CJXH"] = msg.cJXH();
    j["ZQDM"] = msg.zQDM();
    j["ZQJC"] = msg.zQJC();
    j["ZQLB"] = msg.zQLB();
    j["BJYDY"] = msg.bJYDY();
    j["BDYMC"] = msg.bDYMC();
    j["SJYDY"] = msg.sJYDY();
    j["SDYMC"] = msg.sDYMC();
    j["CJSL"] = msg.cJSL();
    j["CJJG"] = msg.cJJG();
    j["CJSJ"] = msg.cJSJ();
    j["BYBZ"] = msg.bYBZ();
  }
};
} // namespace nlohmann

#endif
