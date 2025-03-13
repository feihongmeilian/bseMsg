#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQFGKCJXXDBFMsg.h"
#include "bse/msg/NQFGKCJXXDBFMsgFormatter.h"
#include "bse/msg/NQFGKCJXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQFGKSBXXDBFMsg.h"

namespace bse {
namespace msg {
NQFGKCJXXDBFMsg::NQFGKCJXXDBFMsg()
    : dbf::DBFRecord(), cJXH_(0), cJSL_(0), cJJG_(0) {}

NQFGKCJXXDBFMsg::NQFGKCJXXDBFMsg(const NQFGKSBXXDBFMsg &msg)
    : dbf::DBFRecord(msg), cJXH_(0), zQDM_(msg.zQDM()), zQLB_(msg.zQLB()),
      cJSL_(0), cJJG_(0), bYBZ_(msg.bYBZ()) {}

NQFGKCJXXDBFMsg::~NQFGKCJXXDBFMsg() = default;

void NQFGKCJXXDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readInt64<8>();
    setCJXH(value);
  }
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<8>();
    setZQJC(value);
  }
  {
    auto value = buff.readString<2>();
    setZQLB(value);
  }
  {
    auto value = buff.readString<6>();
    setBJYDY(value);
  }
  {
    auto value = buff.readString<128>();
    setBDYMC(value);
  }
  {
    auto value = buff.readString<6>();
    setSJYDY(value);
  }
  {
    auto value = buff.readString<128>();
    setSDYMC(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setCJSL(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setCJJG(value);
  }
  {
    auto value = buff.readString<6>();
    setCJSJ(value);
  }
  {
    auto value = buff.readString<1>();
    setBYBZ(value);
  }
}

void NQFGKCJXXDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendInt64<8>(cJXH_);
  buff.appendString<6>(zQDM_);
  buff.appendString<8>(zQJC_);
  buff.appendString<2>(zQLB_);
  buff.appendString<6>(bJYDY_);
  buff.appendString<128>(bDYMC_);
  buff.appendString<6>(sJYDY_);
  buff.appendString<128>(sDYMC_);
  buff.appendInt64<12, 0>(cJSL_);
  buff.appendInt64<9, 3>(cJJG_);
  buff.appendString<6>(cJSJ_);
  buff.appendString<1>(bYBZ_);
}

void NQFGKCJXXDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQFGKCJXXDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQFGKCJXXDBFMsg::toString() const {
  return fmt::format("{}", *this);
}

} // namespace msg
} // namespace bse
