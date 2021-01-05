#pragma once
#include "CfgNode.h"

class CfgStatementNode: public CfgNode {
protected:
  std::ostream& print(std::ostream &out) const override;

};


