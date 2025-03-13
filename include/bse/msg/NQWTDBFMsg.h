#ifndef BSE_MSG_N_Q_W_T_D_B_F_MSG_H
#define BSE_MSG_N_Q_W_T_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 申报库
class NQWTDBFMsg : public dbf::DBFRecord {
public:
  NQWTDBFMsg();
  ~NQWTDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setHTXH(const std::string &value) { hTXH_ = value; }
  const std::string &hTXH() const { return hTXH_; }

  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setZQZH(const std::string &value) { zQZH_ = value; }
  const std::string &zQZH() const { return zQZH_; }

  void setWTSL(int64_t value) { wTSL_ = value; }
  int64_t wTSL() const { return wTSL_; }

  void setWTJG(int64_t value) { wTJG_ = value; }
  int64_t wTJG() const { return wTJG_; }

  void setYWLB(const std::string &value) { yWLB_ = value; }
  const std::string &yWLB() const { return yWLB_; }

  void setDFDY(const std::string &value) { dFDY_ = value; }
  const std::string &dFDY() const { return dFDY_; }

  void setDFZH(const std::string &value) { dFZH_ = value; }
  const std::string &dFZH() const { return dFZH_; }

  void setWTSL2(int64_t value) { wTSL2_ = value; }
  int64_t wTSL2() const { return wTSL2_; }

  void setWTJG2(int64_t value) { wTJG2_ = value; }
  int64_t wTJG2() const { return wTJG2_; }

  void setLXR(const std::string &value) { lXR_ = value; }
  const std::string &lXR() const { return lXR_; }

  void setLXFS(const std::string &value) { lXFS_ = value; }
  const std::string &lXFS() const { return lXFS_; }

  void setYDH(int32_t value) { yDH_ = value; }
  int32_t yDH() const { return yDH_; }

  void setRZRQ(const std::string &value) { rZRQ_ = value; }
  const std::string &rZRQ() const { return rZRQ_; }

  void setPCBZ(const std::string &value) { pCBZ_ = value; }
  const std::string &pCBZ() const { return pCBZ_; }

  void setWTSJ(const std::string &value) { wTSJ_ = value; }
  const std::string &wTSJ() const { return wTSJ_; }

  void setCLBZ(const std::string &value) { cLBZ_ = value; }
  const std::string &cLBZ() const { return cLBZ_; }

  void setBYBZ(const std::string &value) { bYBZ_ = value; }
  const std::string &bYBZ() const { return bYBZ_; }

  void setBYZD1(const std::string &value) { bYZD1_ = value; }
  const std::string &bYZD1() const { return bYZD1_; }

  void setBYZD2(const std::string &value) { bYZD2_ = value; }
  const std::string &bYZD2() const { return bYZD2_; }

  void setBYZD3(const std::string &value) { bYZD3_ = value; }
  const std::string &bYZD3() const { return bYZD3_; }

private:
  // 合同序号
  std::string hTXH_;
  // 证券代码
  std::string zQDM_;
  // 证券账户
  std::string zQZH_;
  // 申报数量
  int64_t wTSL_;
  // 申报价格
  int64_t wTJG_;
  // 业务类别
  std::string yWLB_;
  // 拟成交对手方交易单元
  std::string dFDY_;
  // 拟成交对手方证券账号
  std::string dFZH_;
  // 申报数量2
  int64_t wTSL2_;
  // 申报价格2
  int64_t wTJG2_;
  // 联系人
  std::string lXR_;
  // 联系方式
  std::string lXFS_;
  // 成交约定号
  int32_t yDH_;
  // 融资融券标志
  std::string rZRQ_;
  // 平仓标志
  std::string pCBZ_;
  // 申报时间
  std::string wTSJ_;
  // 处理标志
  std::string cLBZ_;
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
