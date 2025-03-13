#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQHQDBFMsg.h"
#include "bse/msg/NQHQDBFMsgFormatter.h"
#include "bse/msg/NQHQDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
NQHQDBFMsg::NQHQDBFMsg()
    : dbf::DBFRecord(), zRSP_(0), jRKP_(0), zJCJ_(0), cJSL_(0), cJJE_(0),
      cJBS_(0), zGCJ_(0), zDCJ_(0), sYL1_(0), sYL2_(0), jSD1_(0), jSD2_(0),
      hYCC_(0), sJW5_(0), sSL5_(0), sJW4_(0), sSL4_(0), sJW3_(0), sSL3_(0),
      sJW2_(0), sSL2_(0), sJW1_(0), sSL1_(0), bJW1_(0), bSL1_(0), bJW2_(0),
      bSL2_(0), bJW3_(0), bSL3_(0), bJW4_(0), bSL4_(0), bJW5_(0), bSL5_(0) {}

NQHQDBFMsg::~NQHQDBFMsg() = default;

void NQHQDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<8>();
    setZQJC(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setZRSP(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setJRKP(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setZJCJ(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setCJSL(value);
  }
  {
    auto value = buff.readInt64<17, 3>();
    setCJJE(value);
  }
  {
    auto value = buff.readInt64<9, 0>();
    setCJBS(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setZGCJ(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setZDCJ(value);
  }
  {
    auto value = buff.readInt64<9, 4>();
    setSYL1(value);
  }
  {
    auto value = buff.readInt64<9, 4>();
    setSYL2(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setJSD1(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setJSD2(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setHYCC(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setSJW5(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setSSL5(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setSJW4(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setSSL4(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setSJW3(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setSSL3(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setSJW2(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setSSL2(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setSJW1(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setSSL1(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setBJW1(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setBSL1(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setBJW2(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setBSL2(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setBJW3(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setBSL3(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setBJW4(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setBSL4(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setBJW5(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setBSL5(value);
  }
}

void NQHQDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<6>(zQDM_);
  buff.appendString<8>(zQJC_);
  buff.appendInt64<9, 3>(zRSP_);
  buff.appendInt64<9, 3>(jRKP_);
  buff.appendInt64<9, 3>(zJCJ_);
  buff.appendInt64<12, 0>(cJSL_);
  buff.appendInt64<17, 3>(cJJE_);
  buff.appendInt64<9, 0>(cJBS_);
  buff.appendInt64<9, 3>(zGCJ_);
  buff.appendInt64<9, 3>(zDCJ_);
  buff.appendInt64<9, 4>(sYL1_);
  buff.appendInt64<9, 4>(sYL2_);
  buff.appendInt64<9, 3>(jSD1_);
  buff.appendInt64<9, 3>(jSD2_);
  buff.appendInt64<12, 0>(hYCC_);
  buff.appendInt64<9, 3>(sJW5_);
  buff.appendInt64<12, 0>(sSL5_);
  buff.appendInt64<9, 3>(sJW4_);
  buff.appendInt64<12, 0>(sSL4_);
  buff.appendInt64<9, 3>(sJW3_);
  buff.appendInt64<12, 0>(sSL3_);
  buff.appendInt64<9, 3>(sJW2_);
  buff.appendInt64<12, 0>(sSL2_);
  buff.appendInt64<9, 3>(sJW1_);
  buff.appendInt64<12, 0>(sSL1_);
  buff.appendInt64<9, 3>(bJW1_);
  buff.appendInt64<12, 0>(bSL1_);
  buff.appendInt64<9, 3>(bJW2_);
  buff.appendInt64<12, 0>(bSL2_);
  buff.appendInt64<9, 3>(bJW3_);
  buff.appendInt64<12, 0>(bSL3_);
  buff.appendInt64<9, 3>(bJW4_);
  buff.appendInt64<12, 0>(bSL4_);
  buff.appendInt64<9, 3>(bJW5_);
  buff.appendInt64<12, 0>(bSL5_);
}

void NQHQDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQHQDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQHQDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
