#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQFGKSBXXDBFMsg.h"
#include "bse/msg/NQFGKSBXXDBFMsgFormatter.h"
#include "bse/msg/NQFGKSBXXDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
NQFGKSBXXDBFMsg::NQFGKSBXXDBFMsg()
    : dbf::DBFRecord(), wTSL_(0), wTJG_(0), yDH_(0) {}

NQFGKSBXXDBFMsg::~NQFGKSBXXDBFMsg() = default;

void NQFGKSBXXDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<6>();
    setJYDY(value);
  }
  {
    auto value = buff.readString<2>();
    setZQLB(value);
  }
  {
    auto value = buff.readString<2>();
    setSBLB(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setWTSL(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setWTJG(value);
  }
  {
    auto value = buff.readInt32<8, 0>();
    setYDH(value);
  }
  {
    auto value = buff.readString<6>();
    setWTSJ(value);
  }
  {
    auto value = buff.readString<1>();
    setJLZT(value);
  }
  {
    auto value = buff.readString<1>();
    setBYBZ(value);
  }
}

void NQFGKSBXXDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<6>(zQDM_);
  buff.appendString<6>(jYDY_);
  buff.appendString<2>(zQLB_);
  buff.appendString<2>(sBLB_);
  buff.appendInt64<12, 0>(wTSL_);
  buff.appendInt64<9, 3>(wTJG_);
  buff.appendInt32<8, 0>(yDH_);
  buff.appendString<6>(wTSJ_);
  buff.appendString<1>(jLZT_);
  buff.appendString<1>(bYBZ_);
}

void NQFGKSBXXDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQFGKSBXXDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQFGKSBXXDBFMsg::toString() const {
  return fmt::format("{}", *this);
}

} // namespace msg
} // namespace bse
