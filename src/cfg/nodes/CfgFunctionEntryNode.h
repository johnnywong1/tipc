#pragma once
#include "CfgNode.h"


class CfgFunctionEntryNode: public CfgNode {

protected:
  std::ostream& print(std::ostream &out) const override;

};

