#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/BJSBSDBFMsg.h"
#include "bse/msg/BJSQRDBFMsg.h"
#include "bse/msg/BJSQRDBFMsgFormatter.h"
#include "bse/msg/BJSQRDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
BJSQRDBFMsg::BJSQRDBFMsg()
    : dbf::DBFRecord(), wTSL_(0), wTZJ_(0), wTJG_(0), rQ1_(0), rQ2_(0) {}

BJSQRDBFMsg::BJSQRDBFMsg(const BJSBSDBFMsg &msg)
    : dbf::DBFRecord(msg), zJJS_(msg.zJJS()), yWLB_(msg.yWLB()),
      wTLX_(msg.wTLX()), wTXH_(msg.wTXH()), zQDM_(msg.zQDM()),
      gDDM_(msg.gDDM()), xWDM_(msg.xWDM()), yWSJ_(msg.yWSJ()),
      gFXZ_(msg.gFXZ()), wTSL_(msg.wTSL()), wTZJ_(msg.wTZJ()),
      wTJG_(msg.wTJG()), bZ1_(msg.bZ1()), bZ2_(msg.bZ2()), dFXW_(msg.dFXW()),
      dFGD_(msg.dFGD()), dFXZ_(msg.dFXZ()), nR1_(msg.nR1()), nR2_(msg.nR2()),
      rQ1_(msg.rQ1()), rQ2_(msg.rQ2()), wTRQ_(msg.wTRQ()), wTSJ_(msg.wTSJ()) {}

BJSQRDBFMsg::~BJSQRDBFMsg() = default;

void BJSQRDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
  dbf::DBFRecord::parseFrom(buff);
  {
    auto value = buff.readString<10>();
    setLSHM(value);
  }
  {
    auto value = buff.readString<6>();
    setZJJS(value);
  }
  {
    auto value = buff.readString<2>();
    setYWLB(value);
  }
  {
    auto value = buff.readString<1>();
    setWTLX(value);
  }
  {
    auto value = buff.readString<8>();
    setWTXH(value);
  }
  {
    auto value = buff.readString<6>();
    setZQDM(value);
  }
  {
    auto value = buff.readString<10>();
    setGDDM(value);
  }
  {
    auto value = buff.readString<6>();
    setXWDM(value);
  }
  {
    auto value = buff.readString<30>();
    setYWSJ(value);
  }
  {
    auto value = buff.readString<2>();
    setGFXZ(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setWTSL(value);
  }
  {
    auto value = buff.readInt64<16, 3>();
    setWTZJ(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setWTJG(value);
  }
  {
    auto value = buff.readString<1>();
    setBZ1(value);
  }
  {
    auto value = buff.readString<1>();
    setBZ2(value);
  }
  {
    auto value = buff.readString<6>();
    setDFXW(value);
  }
  {
    auto value = buff.readString<10>();
    setDFGD(value);
  }
  {
    auto value = buff.readString<2>();
    setDFXZ(value);
  }
  {
    auto value = buff.readString<60>();
    setNR1(value);
  }
  {
    auto value = buff.readString<120>();
    setNR2(value);
  }
  {
    auto value = buff.readInt64<8, 0>();
    setRQ1(value);
  }
  {
    auto value = buff.readInt64<8, 0>();
    setRQ2(value);
  }
  {
    auto value = buff.readString<8>();
    setWTRQ(value);
  }
  {
    auto value = buff.readString<8>();
    setWTSJ(value);
  }
  {
    auto value = buff.readString<3>();
    setCWDH(value);
  }
  {
    auto value = buff.readString<1>();
    setQSBZ(value);
  }
}

void BJSQRDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<10>(lSHM_);
  buff.appendString<6>(zJJS_);
  buff.appendString<2>(yWLB_);
  buff.appendString<1>(wTLX_);
  buff.appendString<8>(wTXH_);
  buff.appendString<6>(zQDM_);
  buff.appendString<10>(gDDM_);
  buff.appendString<6>(xWDM_);
  buff.appendString<30>(yWSJ_);
  buff.appendString<2>(gFXZ_);
  buff.appendInt64<12, 0>(wTSL_);
  buff.appendInt64<16, 3>(wTZJ_);
  buff.appendInt64<9, 3>(wTJG_);
  buff.appendString<1>(bZ1_);
  buff.appendString<1>(bZ2_);
  buff.appendString<6>(dFXW_);
  buff.appendString<10>(dFGD_);
  buff.appendString<2>(dFXZ_);
  buff.appendString<60>(nR1_);
  buff.appendString<120>(nR2_);
  buff.appendInt64<8, 0>(rQ1_);
  buff.appendInt64<8, 0>(rQ2_);
  buff.appendString<8>(wTRQ_);
  buff.appendString<8>(wTSJ_);
  buff.appendString<3>(cWDH_);
  buff.appendString<1>(qSBZ_);
}

void BJSQRDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void BJSQRDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string BJSQRDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
