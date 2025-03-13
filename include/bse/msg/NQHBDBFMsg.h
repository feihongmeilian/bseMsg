#ifndef BSE_MSG_N_Q_H_B_D_B_F_MSG_H
#define BSE_MSG_N_Q_H_B_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
class NQWTDBFMsg;
// 回报库
class NQHBDBFMsg : public dbf::DBFRecord {
public:
  NQHBDBFMsg();
  explicit NQHBDBFMsg(const NQWTDBFMsg &);
  ~NQHBDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setCJHM(const std::string &value) { cJHM_ = value; }
  const std::string &cJHM() const { return cJHM_; }

  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setHTXH(const std::string &value) { hTXH_ = value; }
  const std::string &hTXH() const { return hTXH_; }

  void setZQZH(const std::string &value) { zQZH_ = value; }
  const std::string &zQZH() const { return zQZH_; }

  void setCJSL(int64_t value) { cJSL_ = value; }
  int64_t cJSL() const { return cJSL_; }

  void setCJJG(int64_t value) { cJJG_ = value; }
  int64_t cJJG() const { return cJJG_; }

  void setCJSL2(int64_t value) { cJSL2_ = value; }
  int64_t cJSL2() const { return cJSL2_; }

  void setDFDY(const std::string &value) { dFDY_ = value; }
  const std::string &dFDY() const { return dFDY_; }

  void setDFZH(const std::string &value) { dFZH_ = value; }
  const std::string &dFZH() const { return dFZH_; }

  void setCJSJ(const std::string &value) { cJSJ_ = value; }
  const std::string &cJSJ() const { return cJSJ_; }

  void setCJRQ(const std::string &value) { cJRQ_ = value; }
  const std::string &cJRQ() const { return cJRQ_; }

  void setYWLB(const std::string &value) { yWLB_ = value; }
  const std::string &yWLB() const { return yWLB_; }

  void setCDYY(const std::string &value) { cDYY_ = value; }
  const std::string &cDYY() const { return cDYY_; }

  void setRZRQ(const std::string &value) { rZRQ_ = value; }
  const std::string &rZRQ() const { return rZRQ_; }

  void setPCBZ(const std::string &value) { pCBZ_ = value; }
  const std::string &pCBZ() const { return pCBZ_; }

  void setBYBZ(const std::string &value) { bYBZ_ = value; }
  const std::string &bYBZ() const { return bYBZ_; }

  void setBYZD1(const std::string &value) { bYZD1_ = value; }
  const std::string &bYZD1() const { return bYZD1_; }

  void setBYZD2(const std::string &value) { bYZD2_ = value; }
  const std::string &bYZD2() const { return bYZD2_; }

  void setBYZD3(const std::string &value) { bYZD3_ = value; }
  const std::string &bYZD3() const { return bYZD3_; }

private:
  // 成交号码
  std::string cJHM_;
  // 证券代码
  std::string zQDM_;
  // 合同序号
  std::string hTXH_;
  // 证券账户
  std::string zQZH_;
  // 成交数量
  int64_t cJSL_;
  // 成交价格
  int64_t cJJG_;
  // 成交数量 2
  int64_t cJSL2_;
  // 对手方交易单元
  std::string dFDY_;
  // 对手方证券账户
  std::string dFZH_;
  // 成交时间 HHMMSSss
  std::string cJSJ_;
  // 成交日期 CCYYMMDD
  std::string cJRQ_;
  // 业务类别
  std::string yWLB_;
  // 撤单原因
  std::string cDYY_;
  // 融资融券标志
  std::string rZRQ_;
  // 平仓标志
  std::string pCBZ_;
  // 备用标志
  std::string bYBZ_;
  // 备用字段 1
  std::string bYZD1_;
  // 备用字段 2
  std::string bYZD2_;
  // 备用字段 3
  std::string bYZD3_;
};
} // namespace msg
} // namespace bse
#endif
