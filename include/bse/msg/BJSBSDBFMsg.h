#ifndef BSE_MSG_B_J_S_B_S_D_B_F_MSG_H
#define BSE_MSG_B_J_S_B_S_D_B_F_MSG_H

#include "dbf/DBFRecord.h"
#include <nlohmann/json.hpp>

namespace bse {
namespace msg {
// 非交易委托库
class BJSBSDBFMsg : public dbf::DBFRecord {
public:
  BJSBSDBFMsg();
  ~BJSBSDBFMsg();

public:
  virtual void parseFrom(dbf::DBFBuffer &) override;
  virtual void serializeTo(dbf::DBFBuffer &) const override;
  virtual void parseFromJson(const nlohmann::json &) override;
  virtual void serializeToJson(nlohmann::json &) const override;
  virtual std::string toString() const override;

public:
  void setZJJS(const std::string &value) { zJJS_ = value; }
  const std::string &zJJS() const { return zJJS_; }

  void setYWLB(const std::string &value) { yWLB_ = value; }
  const std::string &yWLB() const { return yWLB_; }

  void setWTLX(const std::string &value) { wTLX_ = value; }
  const std::string &wTLX() const { return wTLX_; }

  void setWTXH(const std::string &value) { wTXH_ = value; }
  const std::string &wTXH() const { return wTXH_; }

  void setZQDM(const std::string &value) { zQDM_ = value; }
  const std::string &zQDM() const { return zQDM_; }

  void setGDDM(const std::string &value) { gDDM_ = value; }
  const std::string &gDDM() const { return gDDM_; }

  void setXWDM(const std::string &value) { xWDM_ = value; }
  const std::string &xWDM() const { return xWDM_; }

  void setYWSJ(const std::string &value) { yWSJ_ = value; }
  const std::string &yWSJ() const { return yWSJ_; }

  void setGFXZ(const std::string &value) { gFXZ_ = value; }
  const std::string &gFXZ() const { return gFXZ_; }

  void setWTSL(int64_t value) { wTSL_ = value; }
  int64_t wTSL() const { return wTSL_; }

  void setWTZJ(int64_t value) { wTZJ_ = value; }
  int64_t wTZJ() const { return wTZJ_; }

  void setWTJG(int64_t value) { wTJG_ = value; }
  int64_t wTJG() const { return wTJG_; }

  void setBZ1(const std::string &value) { bZ1_ = value; }
  const std::string &bZ1() const { return bZ1_; }

  void setBZ2(const std::string &value) { bZ2_ = value; }
  const std::string &bZ2() const { return bZ2_; }

  void setDFXW(const std::string &value) { dFXW_ = value; }
  const std::string &dFXW() const { return dFXW_; }

  void setDFGD(const std::string &value) { dFGD_ = value; }
  const std::string &dFGD() const { return dFGD_; }

  void setDFXZ(const std::string &value) { dFXZ_ = value; }
  const std::string &dFXZ() const { return dFXZ_; }

  void setNR1(const std::string &value) { nR1_ = value; }
  const std::string &nR1() const { return nR1_; }

  void setNR2(const std::string &value) { nR2_ = value; }
  const std::string &nR2() const { return nR2_; }

  void setRQ1(int64_t value) { rQ1_ = value; }
  int64_t rQ1() const { return rQ1_; }

  void setRQ2(int64_t value) { rQ2_ = value; }
  int64_t rQ2() const { return rQ2_; }

  void setWTRQ(const std::string &value) { wTRQ_ = value; }
  const std::string &wTRQ() const { return wTRQ_; }

  void setWTSJ(const std::string &value) { wTSJ_ = value; }
  const std::string &wTSJ() const { return wTSJ_; }

  void setCLBZ(const std::string &value) { cLBZ_ = value; }
  const std::string &cLBZ() const { return cLBZ_; }

  void setBYZD(const std::string &value) { bYZD_ = value; }
  const std::string &bYZD() const { return bYZD_; }

private:
  // 结算账号
  std::string zJJS_;
  // 业务类别
  std::string yWLB_;
  // 委托类型
  std::string wTLX_;
  // 委托序号
  std::string wTXH_;
  // 证券代码
  std::string zQDM_;
  // 证券账户
  std::string gDDM_;
  // 托管单元
  std::string xWDM_;
  // 业务数据
  std::string yWSJ_;
  // 股份性质
  std::string gFXZ_;
  // 委托数量
  int64_t wTSL_;
  // 委托资金
  int64_t wTZJ_;
  // 委托价格
  int64_t wTJG_;
  // 标志 1
  std::string bZ1_;
  // 标志 2
  std::string bZ2_;
  // 对方托管单元
  std::string dFXW_;
  // 对方证券账户
  std::string dFGD_;
  // 对方股份性质
  std::string dFXZ_;
  // 备注内容 1
  std::string nR1_;
  // 备注内容 2
  std::string nR2_;
  // 日期 1
  int64_t rQ1_;
  // 日期 2
  int64_t rQ2_;
  // 委托日期
  std::string wTRQ_;
  // 委托写入时间
  std::string wTSJ_;
  // 必填项
  std::string cLBZ_;
  // 备用标志
  std::string bYZD_;
};
} // namespace msg
} // namespace bse
#endif
