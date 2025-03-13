#ifndef BSE_MSG_N_Q_H_Q_D_B_F_MSG_JSON_SERIALIZER_H
#define BSE_MSG_N_Q_H_Q_D_B_F_MSG_JSON_SERIALIZER_H

#include <cstdint>
#include <exception>
#include <string>
#include <vector>

#include <nlohmann/json.hpp>
#include <util/StringUtil.hpp>

#include "NQHQDBFMsg.h"

namespace nlohmann {
template <> struct adl_serializer<bse::msg::NQHQDBFMsg> {
  static void from_json(const json &j, bse::msg::NQHQDBFMsg &msg) {
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
    if (j.contains("ZRSP")) {
      msg.setZRSP(j["ZRSP"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZRSP field");
    }
    if (j.contains("JRKP")) {
      msg.setJRKP(j["JRKP"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain JRKP field");
    }
    if (j.contains("ZJCJ")) {
      msg.setZJCJ(j["ZJCJ"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZJCJ field");
    }
    if (j.contains("CJSL")) {
      msg.setCJSL(j["CJSL"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJSL field");
    }
    if (j.contains("CJJE")) {
      msg.setCJJE(j["CJJE"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJJE field");
    }
    if (j.contains("CJBS")) {
      msg.setCJBS(j["CJBS"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain CJBS field");
    }
    if (j.contains("ZGCJ")) {
      msg.setZGCJ(j["ZGCJ"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZGCJ field");
    }
    if (j.contains("ZDCJ")) {
      msg.setZDCJ(j["ZDCJ"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain ZDCJ field");
    }
    if (j.contains("SYL1")) {
      msg.setSYL1(j["SYL1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SYL1 field");
    }
    if (j.contains("SYL2")) {
      msg.setSYL2(j["SYL2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SYL2 field");
    }
    if (j.contains("JSD1")) {
      msg.setJSD1(j["JSD1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain JSD1 field");
    }
    if (j.contains("JSD2")) {
      msg.setJSD2(j["JSD2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain JSD2 field");
    }
    if (j.contains("HYCC")) {
      msg.setHYCC(j["HYCC"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain HYCC field");
    }
    if (j.contains("SJW5")) {
      msg.setSJW5(j["SJW5"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SJW5 field");
    }
    if (j.contains("SSL5")) {
      msg.setSSL5(j["SSL5"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SSL5 field");
    }
    if (j.contains("SJW4")) {
      msg.setSJW4(j["SJW4"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SJW4 field");
    }
    if (j.contains("SSL4")) {
      msg.setSSL4(j["SSL4"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SSL4 field");
    }
    if (j.contains("SJW3")) {
      msg.setSJW3(j["SJW3"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SJW3 field");
    }
    if (j.contains("SSL3")) {
      msg.setSSL3(j["SSL3"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SSL3 field");
    }
    if (j.contains("SJW2")) {
      msg.setSJW2(j["SJW2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SJW2 field");
    }
    if (j.contains("SSL2")) {
      msg.setSSL2(j["SSL2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SSL2 field");
    }
    if (j.contains("SJW1")) {
      msg.setSJW1(j["SJW1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SJW1 field");
    }
    if (j.contains("SSL1")) {
      msg.setSSL1(j["SSL1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain SSL1 field");
    }
    if (j.contains("BJW1")) {
      msg.setBJW1(j["BJW1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BJW1 field");
    }
    if (j.contains("BSL1")) {
      msg.setBSL1(j["BSL1"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BSL1 field");
    }
    if (j.contains("BJW2")) {
      msg.setBJW2(j["BJW2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BJW2 field");
    }
    if (j.contains("BSL2")) {
      msg.setBSL2(j["BSL2"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BSL2 field");
    }
    if (j.contains("BJW3")) {
      msg.setBJW3(j["BJW3"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BJW3 field");
    }
    if (j.contains("BSL3")) {
      msg.setBSL3(j["BSL3"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BSL3 field");
    }
    if (j.contains("BJW4")) {
      msg.setBJW4(j["BJW4"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BJW4 field");
    }
    if (j.contains("BSL4")) {
      msg.setBSL4(j["BSL4"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BSL4 field");
    }
    if (j.contains("BJW5")) {
      msg.setBJW5(j["BJW5"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BJW5 field");
    }
    if (j.contains("BSL5")) {
      msg.setBSL5(j["BSL5"].get<int64_t>());
    } else {
      throw std::invalid_argument("JSON does not contain BSL5 field");
    }
  }

  static void to_json(json &j, const bse::msg::NQHQDBFMsg &msg) {
    j["ZQDM"] = msg.zQDM();
    j["ZQJC"] = msg.zQJC();
    j["ZRSP"] = msg.zRSP();
    j["JRKP"] = msg.jRKP();
    j["ZJCJ"] = msg.zJCJ();
    j["CJSL"] = msg.cJSL();
    j["CJJE"] = msg.cJJE();
    j["CJBS"] = msg.cJBS();
    j["ZGCJ"] = msg.zGCJ();
    j["ZDCJ"] = msg.zDCJ();
    j["SYL1"] = msg.sYL1();
    j["SYL2"] = msg.sYL2();
    j["JSD1"] = msg.jSD1();
    j["JSD2"] = msg.jSD2();
    j["HYCC"] = msg.hYCC();
    j["SJW5"] = msg.sJW5();
    j["SSL5"] = msg.sSL5();
    j["SJW4"] = msg.sJW4();
    j["SSL4"] = msg.sSL4();
    j["SJW3"] = msg.sJW3();
    j["SSL3"] = msg.sSL3();
    j["SJW2"] = msg.sJW2();
    j["SSL2"] = msg.sSL2();
    j["SJW1"] = msg.sJW1();
    j["SSL1"] = msg.sSL1();
    j["BJW1"] = msg.bJW1();
    j["BSL1"] = msg.bSL1();
    j["BJW2"] = msg.bJW2();
    j["BSL2"] = msg.bSL2();
    j["BJW3"] = msg.bJW3();
    j["BSL3"] = msg.bSL3();
    j["BJW4"] = msg.bJW4();
    j["BSL4"] = msg.bSL4();
    j["BJW5"] = msg.bJW5();
    j["BSL5"] = msg.bSL5();
  }
};
} // namespace nlohmann

#endif
