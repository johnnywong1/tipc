#include "CfgFunctionEntryNode.h"

std::ostream &CfgFunctionEntryNode::print(std::ostream &out) const {
  out << "[FunEntry] " << *getData();
  return out;
}
