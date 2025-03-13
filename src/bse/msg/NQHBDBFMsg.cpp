#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQHBDBFMsg.h"
#include "bse/msg/NQHBDBFMsgFormatter.h"
#include "bse/msg/NQHBDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQWTDBFMsg.h"

namespace bse {
namespace msg {
NQHBDBFMsg::NQHBDBFMsg() : dbf::DBFRecord(), cJSL_(0), cJJG_(0), cJSL2_(0) {}

NQHBDBFMsg::NQHBDBFMsg(const NQWTDBFMsg &msg)
    : dbf::DBFRecord(msg), zQDM_(msg.zQDM()), hTXH_(msg.hTXH()),
      zQZH_(msg.zQZH()), cJSL_(0), cJJG_(0), cJSL2_(0), dFDY_(msg.dFDY()),
      dFZH_(msg.dFZH()), yWLB_(msg.yWLB()), rZRQ_(msg.rZRQ()),
      pCBZ_(msg.pCBZ()), bYBZ_(msg.bYBZ()), bYZD1_(msg.bYZD1()),
      bYZD2_(msg.bYZD2()), bYZD3_(msg.bYZD3()) {}

NQHBDBFMsg::~NQHBDBFMsg() = default;

void NQHBDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<8>();
    setCJHM(value);
  }
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<22>();
    setHTXH(value);
  }
  {
    auto value = buff.readString<10>();
    setZQZH(value);
  }
  {
    auto value = buff.readInt64<10, 0>();
    setCJSL(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setCJJG(value);
  }
  {
    auto value = buff.readInt64<10, 0>();
    setCJSL2(value);
  }
  {
    auto value = buff.readString<6>();
    setDFDY(value);
  }
  {
    auto value = buff.readString<10>();
    setDFZH(value);
  }
  {
    auto value = buff.readString<8>();
    setCJSJ(value);
  }
  {
    auto value = buff.readString<8>();
    setCJRQ(value);
  }
  {
    auto value = buff.readString<2>();
    setYWLB(value);
  }
  {
    auto value = buff.readString<2>();
    setCDYY(value);
  }
  {
    auto value = buff.readString<1>();
    setRZRQ(value);
  }
  {
    auto value = buff.readString<1>();
    setPCBZ(value);
  }
  {
    auto value = buff.readString<1>();
    setBYBZ(value);
  }
  {
    auto value = buff.readString<19>();
    setBYZD1(value);
  }
  {
    auto value = buff.readString<19>();
    setBYZD2(value);
  }
  {
    auto value = buff.readString<40>();
    setBYZD3(value);
  }
}

void NQHBDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<8>(cJHM_);
  buff.appendString<6>(zQDM_);
  buff.appendString<22>(hTXH_);
  buff.appendString<10>(zQZH_);
  buff.appendInt64<10, 0>(cJSL_);
  buff.appendInt64<9, 3>(cJJG_);
  buff.appendInt64<10, 0>(cJSL2_);
  buff.appendString<6>(dFDY_);
  buff.appendString<10>(dFZH_);
  buff.appendString<8>(cJSJ_);
  buff.appendString<8>(cJRQ_);
  buff.appendString<2>(yWLB_);
  buff.appendString<2>(cDYY_);
  buff.appendString<1>(rZRQ_);
  buff.appendString<1>(pCBZ_);
  buff.appendString<1>(bYBZ_);
  buff.appendString<19>(bYZD1_);
  buff.appendString<19>(bYZD2_);
  buff.appendString<40>(bYZD3_);
}

void NQHBDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQHBDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQHBDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
