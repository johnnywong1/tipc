#pragma once
#include "CfgNode.h"

class CfgFunctionExitNode: public CfgNode {

protected:
  std::ostream& print(std::ostream &out) const override;

};

