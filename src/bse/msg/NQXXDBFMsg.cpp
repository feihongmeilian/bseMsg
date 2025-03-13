#include <algorithm>
#include <cstring>

#include <fmt/core.h>
#include <fmt/ranges.h>

#include <dbf/DBFBuffer.hpp>
#include <util/StringUtil.hpp>

#include "bse/msg/NQXXDBFMsg.h"
#include "bse/msg/NQXXDBFMsgFormatter.h"
#include "bse/msg/NQXXDBFMsgJsonSerializer.hpp"

namespace bse {
namespace msg {
NQXXDBFMsg::NQXXDBFMsg()
    : dbf::DBFRecord(), zRDW_(0), mGMZ_(0), zGB_(0), fXSGB_(0), sNSY_(0),
      bNSY_(0), jSFL_(0), yHSL_(0), gHFL_(0), mBXL_(0), bLDW_(0), sLDW_(0),
      zXSBSL_(0), jGDW_(0), sBCS_(0), hXCS_(0), xJXZ_(0), zTJG_(0), dTJG_(0),
      dZZTJG_(0), dZDTJG_(0), zHBL_(0), zSSSL_(0), gXSJ_(0) {}

NQXXDBFMsg::~NQXXDBFMsg() = default;

void NQXXDBFMsg::parseFrom(dbf::DBFBuffer &buff) {
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
    auto value = buff.readString<20>();
    setYWJC(value);
  }
  {
    auto value = buff.readString<6>();
    setJCZQ(value);
  }
  {
    auto value = buff.readString<12>();
    setISIN(value);
  }
  {
    auto value = buff.readInt16<4, 0>();
    setZRDW(value);
  }
  {
    auto value = buff.readString<5>();
    setHYZL(value);
  }
  {
    auto value = buff.readString<2>();
    setHBZL(value);
  }
  {
    auto value = buff.readInt32<7, 2>();
    setMGMZ(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setZGB(value);
  }
  {
    auto value = buff.readInt64<12, 0>();
    setFXSGB(value);
  }
  {
    auto value = buff.readInt64<9, 4>();
    setSNSY(value);
  }
  {
    auto value = buff.readInt64<9, 4>();
    setBNSY(value);
  }
  {
    auto value = buff.readInt32<7, 6>();
    setJSFL(value);
  }
  {
    auto value = buff.readInt32<7, 6>();
    setYHSL(value);
  }
  {
    auto value = buff.readInt32<7, 6>();
    setGHFL(value);
  }
  {
    auto value = buff.readString<8>();
    setGPRQ(value);
  }
  {
    auto value = buff.readString<8>();
    setZQQXR(value);
  }
  {
    auto value = buff.readString<8>();
    setDQR(value);
  }
  {
    auto value = buff.readInt64<9, 0>();
    setMBXL(value);
  }
  {
    auto value = buff.readInt32<6, 0>();
    setBLDW(value);
  }
  {
    auto value = buff.readInt32<6, 0>();
    setSLDW(value);
  }
  {
    auto value = buff.readInt64<9, 0>();
    setZXSBSL(value);
  }
  {
    auto value = buff.readInt32<5, 3>();
    setJGDW(value);
  }
  {
    auto value = buff.readInt32<7, 3>();
    setSBCS(value);
  }
  {
    auto value = buff.readInt32<7, 3>();
    setHXCS(value);
  }
  {
    auto value = buff.readInt8<1, 0>();
    setXJXZ(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setZTJG(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setDTJG(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setDZZTJG(value);
  }
  {
    auto value = buff.readInt64<9, 3>();
    setDZDTJG(value);
  }
  {
    auto value = buff.readString<1>();
    setCFGBZ(value);
  }
  {
    auto value = buff.readInt32<5, 2>();
    setZHBL(value);
  }
  {
    auto value = buff.readString<1>();
    setZRZT(value);
  }
  {
    auto value = buff.readString<1>();
    setZQJB(value);
  }
  {
    auto value = buff.readString<1>();
    setZRLX(value);
  }
  {
    auto value = buff.readInt16<4, 0>();
    setZSSSL(value);
  }
  {
    auto value = buff.readString<1>();
    setTPBZ(value);
  }
  {
    auto value = buff.readString<1>();
    setCQCX(value);
  }
  {
    auto value = buff.readString<1>();
    setWLTP(value);
  }
  {
    auto value = buff.readString<4>();
    setQTYW(value);
  }
  {
    auto value = buff.readString<2>();
    setJYS(value);
  }
  {
    auto value = buff.readString<1>();
    setFCBZ(value);
  }
  {
    auto value = buff.readString<1>();
    setRZBD(value);
  }
  {
    auto value = buff.readString<1>();
    setRQBD(value);
  }
  {
    auto value = buff.readString<1>();
    setDRRZ(value);
  }
  {
    auto value = buff.readString<1>();
    setDRRQ(value);
  }
  {
    auto value = buff.readInt32<6, 0>();
    setGXSJ(value);
  }
}

void NQXXDBFMsg::serializeTo(dbf::DBFBuffer &buff) const {
  dbf::DBFRecord::serializeTo(buff);
  buff.appendString<6>(zQDM_);
  buff.appendString<8>(zQJC_);
  buff.appendString<20>(yWJC_);
  buff.appendString<6>(jCZQ_);
  buff.appendString<12>(iSIN_);
  buff.appendInt16<4, 0>(zRDW_);
  buff.appendString<5>(hYZL_);
  buff.appendString<2>(hBZL_);
  buff.appendInt32<7, 2>(mGMZ_);
  buff.appendInt64<12, 0>(zGB_);
  buff.appendInt64<12, 0>(fXSGB_);
  buff.appendInt64<9, 4>(sNSY_);
  buff.appendInt64<9, 4>(bNSY_);
  buff.appendInt32<7, 6>(jSFL_);
  buff.appendInt32<7, 6>(yHSL_);
  buff.appendInt32<7, 6>(gHFL_);
  buff.appendString<8>(gPRQ_);
  buff.appendString<8>(zQQXR_);
  buff.appendString<8>(dQR_);
  buff.appendInt64<9, 0>(mBXL_);
  buff.appendInt32<6, 0>(bLDW_);
  buff.appendInt32<6, 0>(sLDW_);
  buff.appendInt64<9, 0>(zXSBSL_);
  buff.appendInt32<5, 3>(jGDW_);
  buff.appendInt32<7, 3>(sBCS_);
  buff.appendInt32<7, 3>(hXCS_);
  buff.appendInt8<1, 0>(xJXZ_);
  buff.appendInt64<9, 3>(zTJG_);
  buff.appendInt64<9, 3>(dTJG_);
  buff.appendInt64<9, 3>(dZZTJG_);
  buff.appendInt64<9, 3>(dZDTJG_);
  buff.appendString<1>(cFGBZ_);
  buff.appendInt32<5, 2>(zHBL_);
  buff.appendString<1>(zRZT_);
  buff.appendString<1>(zQJB_);
  buff.appendString<1>(zRLX_);
  buff.appendInt16<4, 0>(zSSSL_);
  buff.appendString<1>(tPBZ_);
  buff.appendString<1>(cQCX_);
  buff.appendString<1>(wLTP_);
  buff.appendString<4>(qTYW_);
  buff.appendString<2>(jYS_);
  buff.appendString<1>(fCBZ_);
  buff.appendString<1>(rZBD_);
  buff.appendString<1>(rQBD_);
  buff.appendString<1>(dRRZ_);
  buff.appendString<1>(dRRQ_);
  buff.appendInt32<6, 0>(gXSJ_);
}

void NQXXDBFMsg::parseFromJson(const nlohmann::json &j) { *this = j; }

void NQXXDBFMsg::serializeToJson(nlohmann::json &j) const { j = *this; }

std::string NQXXDBFMsg::toString() const { return fmt::format("{}", *this); }

} // namespace msg
} // namespace bse
