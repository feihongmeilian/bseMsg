#ifndef BSE_MSG_N_Q_H_Q_D_B_F_MSG_H
#define BSE_MSG_N_Q_H_Q_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 证券行情库
class NQHQDBFMsg : public dbf::DBFRecord {
public:
  NQHQDBFMsg();
  ~NQHQDBFMsg();

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

  void setZRSP(int64_t value) { zRSP_ = value; }
  int64_t zRSP() const { return zRSP_; }

  void setJRKP(int64_t value) { jRKP_ = value; }
  int64_t jRKP() const { return jRKP_; }

  void setZJCJ(int64_t value) { zJCJ_ = value; }
  int64_t zJCJ() const { return zJCJ_; }

  void setCJSL(int64_t value) { cJSL_ = value; }
  int64_t cJSL() const { return cJSL_; }

  void setCJJE(int64_t value) { cJJE_ = value; }
  int64_t cJJE() const { return cJJE_; }

  void setCJBS(int64_t value) { cJBS_ = value; }
  int64_t cJBS() const { return cJBS_; }

  void setZGCJ(int64_t value) { zGCJ_ = value; }
  int64_t zGCJ() const { return zGCJ_; }

  void setZDCJ(int64_t value) { zDCJ_ = value; }
  int64_t zDCJ() const { return zDCJ_; }

  void setSYL1(int64_t value) { sYL1_ = value; }
  int64_t sYL1() const { return sYL1_; }

  void setSYL2(int64_t value) { sYL2_ = value; }
  int64_t sYL2() const { return sYL2_; }

  void setJSD1(int64_t value) { jSD1_ = value; }
  int64_t jSD1() const { return jSD1_; }

  void setJSD2(int64_t value) { jSD2_ = value; }
  int64_t jSD2() const { return jSD2_; }

  void setHYCC(int64_t value) { hYCC_ = value; }
  int64_t hYCC() const { return hYCC_; }

  void setSJW5(int64_t value) { sJW5_ = value; }
  int64_t sJW5() const { return sJW5_; }

  void setSSL5(int64_t value) { sSL5_ = value; }
  int64_t sSL5() const { return sSL5_; }

  void setSJW4(int64_t value) { sJW4_ = value; }
  int64_t sJW4() const { return sJW4_; }

  void setSSL4(int64_t value) { sSL4_ = value; }
  int64_t sSL4() const { return sSL4_; }

  void setSJW3(int64_t value) { sJW3_ = value; }
  int64_t sJW3() const { return sJW3_; }

  void setSSL3(int64_t value) { sSL3_ = value; }
  int64_t sSL3() const { return sSL3_; }

  void setSJW2(int64_t value) { sJW2_ = value; }
  int64_t sJW2() const { return sJW2_; }

  void setSSL2(int64_t value) { sSL2_ = value; }
  int64_t sSL2() const { return sSL2_; }

  void setSJW1(int64_t value) { sJW1_ = value; }
  int64_t sJW1() const { return sJW1_; }

  void setSSL1(int64_t value) { sSL1_ = value; }
  int64_t sSL1() const { return sSL1_; }

  void setBJW1(int64_t value) { bJW1_ = value; }
  int64_t bJW1() const { return bJW1_; }

  void setBSL1(int64_t value) { bSL1_ = value; }
  int64_t bSL1() const { return bSL1_; }

  void setBJW2(int64_t value) { bJW2_ = value; }
  int64_t bJW2() const { return bJW2_; }

  void setBSL2(int64_t value) { bSL2_ = value; }
  int64_t bSL2() const { return bSL2_; }

  void setBJW3(int64_t value) { bJW3_ = value; }
  int64_t bJW3() const { return bJW3_; }

  void setBSL3(int64_t value) { bSL3_ = value; }
  int64_t bSL3() const { return bSL3_; }

  void setBJW4(int64_t value) { bJW4_ = value; }
  int64_t bJW4() const { return bJW4_; }

  void setBSL4(int64_t value) { bSL4_ = value; }
  int64_t bSL4() const { return bSL4_; }

  void setBJW5(int64_t value) { bJW5_ = value; }
  int64_t bJW5() const { return bJW5_; }

  void setBSL5(int64_t value) { bSL5_ = value; }
  int64_t bSL5() const { return bSL5_; }

private:
  // 证券代码
  std::string zQDM_;
  // 证券简称
  std::string zQJC_;
  // 昨日收盘价
  int64_t zRSP_;
  // 今日开盘价
  int64_t jRKP_;
  // 最近成交价
  int64_t zJCJ_;
  // 成交数量
  int64_t cJSL_;
  // 成交金额
  int64_t cJJE_;
  // 成交笔数
  int64_t cJBS_;
  // 最高成交价
  int64_t zGCJ_;
  // 最低成交价
  int64_t zDCJ_;
  // 市盈率 1
  int64_t sYL1_;
  // 市盈率 2
  int64_t sYL2_;
  // 价格升跌 1
  int64_t jSD1_;
  // 价格升跌 2
  int64_t jSD2_;
  // 合约持仓量
  int64_t hYCC_;
  // 卖价位五
  int64_t sJW5_;
  // 卖数量五
  int64_t sSL5_;
  // 卖价位四
  int64_t sJW4_;
  // 卖数量四
  int64_t sSL4_;
  // 卖价位三
  int64_t sJW3_;
  // 卖数量三
  int64_t sSL3_;
  // 卖价位二
  int64_t sJW2_;
  // 卖数量二
  int64_t sSL2_;
  // 卖价位一/叫卖揭示价
  int64_t sJW1_;
  // 卖数量一
  int64_t sSL1_;
  // 买价位一/叫买揭示价
  int64_t bJW1_;
  // 买数量一
  int64_t bSL1_;
  // 买价位二
  int64_t bJW2_;
  // 买数量二
  int64_t bSL2_;
  // 买价位三
  int64_t bJW3_;
  // 买数量三
  int64_t bSL3_;
  // 买价位四
  int64_t bJW4_;
  // 买数量四
  int64_t bSL4_;
  // 买价位五
  int64_t bJW5_;
  // 买数量五
  int64_t bSL5_;
};
} // namespace msg
} // namespace bse
#endif
