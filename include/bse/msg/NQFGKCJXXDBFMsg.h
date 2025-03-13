#ifndef BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_H
#define BSE_MSG_N_Q_F_G_K_C_J_X_X_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
class NQFGKSBXXDBFMsg;
// 非公开转让成交信息库
class NQFGKCJXXDBFMsg : public dbf::DBFRecord {
public:
  NQFGKCJXXDBFMsg();
  explicit NQFGKCJXXDBFMsg(const NQFGKSBXXDBFMsg &);
  ~NQFGKCJXXDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setCJXH(int64_t value) { cJXH_ = value; }
  int64_t cJXH() const { return cJXH_; }

  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setZQJC(const std::string &value) { zQJC_ = value; }
  const std::string &zQJC() const { return zQJC_; }

  void setZQLB(const std::string &value) { zQLB_ = value; }
  const std::string &zQLB() const { return zQLB_; }

  void setBJYDY(const std::string &value) { bJYDY_ = value; }
  const std::string &bJYDY() const { return bJYDY_; }

  void setBDYMC(const std::string &value) { bDYMC_ = value; }
  const std::string &bDYMC() const { return bDYMC_; }

  void setSJYDY(const std::string &value) { sJYDY_ = value; }
  const std::string &sJYDY() const { return sJYDY_; }

  void setSDYMC(const std::string &value) { sDYMC_ = value; }
  const std::string &sDYMC() const { return sDYMC_; }

  void setCJSL(int64_t value) { cJSL_ = value; }
  int64_t cJSL() const { return cJSL_; }

  void setCJJG(int64_t value) { cJJG_ = value; }
  int64_t cJJG() const { return cJJG_; }

  void setCJSJ(const std::string &value) { cJSJ_ = value; }
  const std::string &cJSJ() const { return cJSJ_; }

  void setBYBZ(const std::string &value) { bYBZ_ = value; }
  const std::string &bYBZ() const { return bYBZ_; }

private:
  // 序号
  int64_t cJXH_;
  // 证券代码
  std::string zQDM_;
  // 证券简称
  std::string zQJC_;
  // 证券类别
  std::string zQLB_;
  // 买入交易单元
  std::string bJYDY_;
  // 买入营业部名称/交易单元名称
  std::string bDYMC_;
  // 卖出交易单元
  std::string sJYDY_;
  // 卖出营业部名称/交易单元名称
  std::string sDYMC_;
  // 申报数量
  int64_t cJSL_;
  // 申报价格
  int64_t cJJG_;
  // 成交时间 HHMMSS
  std::string cJSJ_;
  // 备用标志
  std::string bYBZ_;
};
} // namespace msg
} // namespace bse
#endif
