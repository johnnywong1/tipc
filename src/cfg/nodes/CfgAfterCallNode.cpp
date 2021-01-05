#include "CfgAfterCallNode.h"

std::ostream &CfgAfterCallNode::print(std::ostream &out) const {
  out << "[AfterCall] " << *getData();
  return out;
}
