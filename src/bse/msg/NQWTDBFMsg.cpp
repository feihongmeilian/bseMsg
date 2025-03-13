#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQWTDBFMsg.h"
#include "bse/msg/NQWTDBFMsgFormatter.h"
#include "bse/msg/NQWTDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
NQWTDBFMsg::NQWTDBFMsg()
    : dbf::DBFRecord(), wTSL_(0), wTJG_(0), wTSL2_(0), wTJG2_(0), yDH_(0) {}

NQWTDBFMsg::~NQWTDBFMsg() = default;

void NQWTDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<22>();
    setHTXH(value);
  }
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<10>();
    setZQZH(value);
  }
  {
    auto value = buff.readInt64<9, 0>();
    setWTSL(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setWTJG(value);
  }
  {
    auto value = buff.readString<2>();
    setYWLB(value);
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
    auto value = buff.readInt64<9, 0>();
    setWTSL2(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setWTJG2(value);
  }
  {
    auto value = buff.readString<12>();
    setLXR(value);
  }
  {
    auto value = buff.readString<30>();
    setLXFS(value);
  }
  {
    auto value = buff.readInt32<8, 0>();
    setYDH(value);
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
    auto value = buff.readString<6>();
    setWTSJ(value);
  }
  {
    auto value = buff.readString<1>();
    setCLBZ(value);
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

void NQWTDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<22>(hTXH_);
  buff.appendString<6>(zQDM_);
  buff.appendString<10>(zQZH_);
  buff.appendInt64<9, 0>(wTSL_);
  buff.appendInt64<9, 3>(wTJG_);
  buff.appendString<2>(yWLB_);
  buff.appendString<6>(dFDY_);
  buff.appendString<10>(dFZH_);
  buff.appendInt64<9, 0>(wTSL2_);
  buff.appendInt64<9, 3>(wTJG2_);
  buff.appendString<12>(lXR_);
  buff.appendString<30>(lXFS_);
  buff.appendInt32<8, 0>(yDH_);
  buff.appendString<1>(rZRQ_);
  buff.appendString<1>(pCBZ_);
  buff.appendString<6>(wTSJ_);
  buff.appendString<1>(cLBZ_);
  buff.appendString<1>(bYBZ_);
  buff.appendString<19>(bYZD1_);
  buff.appendString<19>(bYZD2_);
  buff.appendString<40>(bYZD3_);
}

void NQWTDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQWTDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQWTDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
