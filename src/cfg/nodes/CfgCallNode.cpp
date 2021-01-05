#include "CfgCallNode.h"

std::ostream &CfgCallNode::print(std::ostream &out) const {
  out << "[Call] " << *getData();
  return out;
}
