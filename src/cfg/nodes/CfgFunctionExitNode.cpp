#include "CfgFunctionExitNode.h"

std::ostream &CfgFunctionExitNode::print(std::ostream &out) const {
  out << "[FunExit] " << *getData();
  return out;
}
