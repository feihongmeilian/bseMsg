#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQZSXXDBFMsg.h"
#include "bse/msg/NQZSXXDBFMsgFormatter.h"
#include "bse/msg/NQZSXXDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
NQZSXXDBFMsg::NQZSXXDBFMsg() : dbf::DBFRecord(), wTSL_(0), wTJG_(0) {}

NQZSXXDBFMsg::~NQZSXXDBFMsg() = default;

void NQZSXXDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<2>();
    setYWLB(value);
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
    auto value = buff.readString<1>();
    setSJLX(value);
  }
  {
    auto value = buff.readString<6>();
    setWTSJ(value);
  }
  {
    auto value = buff.readString<8>();
    setBYZD(value);
  }
}

void NQZSXXDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<6>(zQDM_);
  buff.appendString<2>(yWLB_);
  buff.appendInt64<12, 0>(wTSL_);
  buff.appendInt64<9, 3>(wTJG_);
  buff.appendString<1>(sJLX_);
  buff.appendString<6>(wTSJ_);
  buff.appendString<8>(bYZD_);
}

void NQZSXXDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQZSXXDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQZSXXDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
