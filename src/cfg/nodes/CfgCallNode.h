#pragma once
#include "CfgNode.h"


class CfgCallNode: public CfgNode{

protected:
  std::ostream& print(std::ostream &out) const override;

};
