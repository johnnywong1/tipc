#pragma once
#include "CfgNode.h"

class CfgAfterCallNode: public CfgNode {
protected:
  std::ostream& print(std::ostream &out) const override;


};

