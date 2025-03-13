#ifndef BSE_MSG_N_Q_F_G_K_S_B_X_X_D_B_F_MSG_H
#define BSE_MSG_N_Q_F_G_K_S_B_X_X_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 非公开转让申报信息库
class NQFGKSBXXDBFMsg : public dbf::DBFRecord {
public:
  NQFGKSBXXDBFMsg();
  ~NQFGKSBXXDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setJYDY(const std::string &value) { jYDY_ = value; }
  const std::string &jYDY() const { return jYDY_; }

  void setZQLB(const std::string &value) { zQLB_ = value; }
  const std::string &zQLB() const { return zQLB_; }

  void setSBLB(const std::string &value) { sBLB_ = value; }
  const std::string &sBLB() const { return sBLB_; }

  void setWTSL(int64_t value) { wTSL_ = value; }
  int64_t wTSL() const { return wTSL_; }

  void setWTJG(int64_t value) { wTJG_ = value; }
  int64_t wTJG() const { return wTJG_; }

  void setYDH(int32_t value) { yDH_ = value; }
  int32_t yDH() const { return yDH_; }

  void setWTSJ(const std::string &value) { wTSJ_ = value; }
  const std::string &wTSJ() const { return wTSJ_; }

  void setJLZT(const std::string &value) { jLZT_ = value; }
  const std::string &jLZT() const { return jLZT_; }

  void setBYBZ(const std::string &value) { bYBZ_ = value; }
  const std::string &bYBZ() const { return bYBZ_; }

private:
  // 证券代码
  std::string zQDM_;
  // 交易单元
  std::string jYDY_;
  // 证券类别
  std::string zQLB_;
  // 申报类别
  std::string sBLB_;
  // 申报数量
  int64_t wTSL_;
  // 申报价格
  int64_t wTJG_;
  // 成交约定号
  int32_t yDH_;
  // 申报时间 HHMMSS
  std::string wTSJ_;
  // 记录状态 0-无效，1-有效
  std::string jLZT_;
  // 备用标志
  std::string bYBZ_;
};
} // namespace msg
} // namespace bse
#endif
