#ifndef BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_H
#define BSE_MSG_N_Q_Z_S_X_X_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 做市业务申报信息库
class NQZSXXDBFMsg : public dbf::DBFRecord {
public:
  NQZSXXDBFMsg();
  ~NQZSXXDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setYWLB(const std::string &value) { yWLB_ = value; }
  const std::string &yWLB() const { return yWLB_; }

  void setWTSL(int64_t value) { wTSL_ = value; }
  int64_t wTSL() const { return wTSL_; }

  void setWTJG(int64_t value) { wTJG_ = value; }
  int64_t wTJG() const { return wTJG_; }

  void setSJLX(const std::string &value) { sJLX_ = value; }
  const std::string &sJLX() const { return sJLX_; }

  void setWTSJ(const std::string &value) { wTSJ_ = value; }
  const std::string &wTSJ() const { return wTSJ_; }

  void setBYZD(const std::string &value) { bYZD_ = value; }
  const std::string &bYZD() const { return bYZD_; }

private:
  // 证券代码
  std::string zQDM_;
  // 业务类别
  std::string yWLB_;
  // 申报数量
  int64_t wTSL_;
  // 申报价格
  int64_t wTJG_;
  // 数据类型
  std::string sJLX_;
  // 申报时间 HHMMSS
  std::string wTSJ_;
  // 备用字段
  std::string bYZD_;
};
} // namespace msg
} // namespace bse
#endif
