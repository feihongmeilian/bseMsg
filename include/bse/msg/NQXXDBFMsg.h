#ifndef BSE_MSG_N_Q_X_X_D_B_F_MSG_H
#define BSE_MSG_N_Q_X_X_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 证券信息库
class NQXXDBFMsg : public dbf::DBFRecord {
public:
  NQXXDBFMsg();
  ~NQXXDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setZQJC(const std::string &value) { zQJC_ = value; }
  const std::string &zQJC() const { return zQJC_; }

  void setYWJC(const std::string &value) { yWJC_ = value; }
  const std::string &yWJC() const { return yWJC_; }

  void setJCZQ(const std::string &value) { jCZQ_ = value; }
  const std::string &jCZQ() const { return jCZQ_; }

  void setISIN(const std::string &value) { iSIN_ = value; }
  const std::string &iSIN() const { return iSIN_; }

  void setZRDW(int16_t value) { zRDW_ = value; }
  int16_t zRDW() const { return zRDW_; }

  void setHYZL(const std::string &value) { hYZL_ = value; }
  const std::string &hYZL() const { return hYZL_; }

  void setHBZL(const std::string &value) { hBZL_ = value; }
  const std::string &hBZL() const { return hBZL_; }

  void setMGMZ(int32_t value) { mGMZ_ = value; }
  int32_t mGMZ() const { return mGMZ_; }

  void setZGB(int64_t value) { zGB_ = value; }
  int64_t zGB() const { return zGB_; }

  void setFXSGB(int64_t value) { fXSGB_ = value; }
  int64_t fXSGB() const { return fXSGB_; }

  void setSNSY(int64_t value) { sNSY_ = value; }
  int64_t sNSY() const { return sNSY_; }

  void setBNSY(int64_t value) { bNSY_ = value; }
  int64_t bNSY() const { return bNSY_; }

  void setJSFL(int32_t value) { jSFL_ = value; }
  int32_t jSFL() const { return jSFL_; }

  void setYHSL(int32_t value) { yHSL_ = value; }
  int32_t yHSL() const { return yHSL_; }

  void setGHFL(int32_t value) { gHFL_ = value; }
  int32_t gHFL() const { return gHFL_; }

  void setGPRQ(const std::string &value) { gPRQ_ = value; }
  const std::string &gPRQ() const { return gPRQ_; }

  void setZQQXR(const std::string &value) { zQQXR_ = value; }
  const std::string &zQQXR() const { return zQQXR_; }

  void setDQR(const std::string &value) { dQR_ = value; }
  const std::string &dQR() const { return dQR_; }

  void setMBXL(int64_t value) { mBXL_ = value; }
  int64_t mBXL() const { return mBXL_; }

  void setBLDW(int32_t value) { bLDW_ = value; }
  int32_t bLDW() const { return bLDW_; }

  void setSLDW(int32_t value) { sLDW_ = value; }
  int32_t sLDW() const { return sLDW_; }

  void setZXSBSL(int64_t value) { zXSBSL_ = value; }
  int64_t zXSBSL() const { return zXSBSL_; }

  void setJGDW(int32_t value) { jGDW_ = value; }
  int32_t jGDW() const { return jGDW_; }

  void setSBCS(int32_t value) { sBCS_ = value; }
  int32_t sBCS() const { return sBCS_; }

  void setHXCS(int32_t value) { hXCS_ = value; }
  int32_t hXCS() const { return hXCS_; }

  void setXJXZ(int8_t value) { xJXZ_ = value; }
  int8_t xJXZ() const { return xJXZ_; }

  void setZTJG(int64_t value) { zTJG_ = value; }
  int64_t zTJG() const { return zTJG_; }

  void setDTJG(int64_t value) { dTJG_ = value; }
  int64_t dTJG() const { return dTJG_; }

  void setDZZTJG(int64_t value) { dZZTJG_ = value; }
  int64_t dZZTJG() const { return dZZTJG_; }

  void setDZDTJG(int64_t value) { dZDTJG_ = value; }
  int64_t dZDTJG() const { return dZDTJG_; }

  void setCFGBZ(const std::string &value) { cFGBZ_ = value; }
  const std::string &cFGBZ() const { return cFGBZ_; }

  void setZHBL(int32_t value) { zHBL_ = value; }
  int32_t zHBL() const { return zHBL_; }

  void setZRZT(const std::string &value) { zRZT_ = value; }
  const std::string &zRZT() const { return zRZT_; }

  void setZQJB(const std::string &value) { zQJB_ = value; }
  const std::string &zQJB() const { return zQJB_; }

  void setZRLX(const std::string &value) { zRLX_ = value; }
  const std::string &zRLX() const { return zRLX_; }

  void setZSSSL(int16_t value) { zSSSL_ = value; }
  int16_t zSSSL() const { return zSSSL_; }

  void setTPBZ(const std::string &value) { tPBZ_ = value; }
  const std::string &tPBZ() const { return tPBZ_; }

  void setCQCX(const std::string &value) { cQCX_ = value; }
  const std::string &cQCX() const { return cQCX_; }

  void setWLTP(const std::string &value) { wLTP_ = value; }
  const std::string &wLTP() const { return wLTP_; }

  void setQTYW(const std::string &value) { qTYW_ = value; }
  const std::string &qTYW() const { return qTYW_; }

  void setJYS(const std::string &value) { jYS_ = value; }
  const std::string &jYS() const { return jYS_; }

  void setFCBZ(const std::string &value) { fCBZ_ = value; }
  const std::string &fCBZ() const { return fCBZ_; }

  void setRZBD(const std::string &value) { rZBD_ = value; }
  const std::string &rZBD() const { return rZBD_; }

  void setRQBD(const std::string &value) { rQBD_ = value; }
  const std::string &rQBD() const { return rQBD_; }

  void setDRRZ(const std::string &value) { dRRZ_ = value; }
  const std::string &dRRZ() const { return dRRZ_; }

  void setDRRQ(const std::string &value) { dRRQ_ = value; }
  const std::string &dRRQ() const { return dRRQ_; }

  void setGXSJ(int32_t value) { gXSJ_ = value; }
  int32_t gXSJ() const { return gXSJ_; }

private:
  // 证券代码
  std::string zQDM_;
  // 证券简称
  std::string zQJC_;
  // 英文简称
  std::string yWJC_;
  // 基础证券
  std::string jCZQ_;
  // ISIN 编码
  std::string iSIN_;
  // 交易单位
  int16_t zRDW_;
  // 行业种类
  std::string hYZL_;
  // 货币种类
  std::string hBZL_;
  // 每股面值
  int32_t mGMZ_;
  // 总股本
  int64_t zGB_;
  // 非限售股本
  int64_t fXSGB_;
  // 上年每股收益
  int64_t sNSY_;
  // 本年每股收益
  int64_t bNSY_;
  // 经手费率
  int32_t jSFL_;
  // 印花税率
  int32_t yHSL_;
  // 过户费率
  int32_t gHFL_;
  // 挂牌日期 CCYYMMDD
  std::string gPRQ_;
  // 起息日 CCYYMMDD
  std::string zQQXR_;
  // 到期日 CCYYMMDD
  std::string dQR_;
  // 每笔限量
  int64_t mBXL_;
  // 买数量单位
  int32_t bLDW_;
  // 卖数量单位
  int32_t sLDW_;
  // 最小申报数量
  int64_t zXSBSL_;
  // 价格档位
  int32_t jGDW_;
  // 首笔交易限价参数
  int32_t sBCS_;
  // 后续交易限价参数
  int32_t hXCS_;
  // 限价参数性质
  int8_t xJXZ_;
  // 涨停价格
  int64_t zTJG_;
  // 跌停价格
  int64_t dTJG_;
  // 大宗交易价格上限
  int64_t dZZTJG_;
  // 大宗交易价格下限
  int64_t dZDTJG_;
  // 成份股标志
  std::string cFGBZ_;
  // 折合比例
  int32_t zHBL_;
  // 交易状态
  std::string zRZT_;
  // 证券级别
  std::string zQJB_;
  // 交易类型
  std::string zRLX_;
  // 做市商数量
  int16_t zSSSL_;
  // 停牌标志
  std::string tPBZ_;
  // 除权除息标志
  std::string cQCX_;
  // 网络投票标志
  std::string wLTP_;
  // 其他业务状态
  std::string qTYW_;
  // 交易场所
  std::string jYS_;
  // 市场层级
  std::string fCBZ_;
  // 是否为融资标的
  std::string rZBD_;
  // 是否为融券标的
  std::string rQBD_;
  // 是否当日可融资
  std::string dRRZ_;
  // 是否当日可融券
  std::string dRRQ_;
  // 记录更新时间 HHMMSS
  int32_t gXSJ_;
};
} // namespace msg
} // namespace bse
#endif
