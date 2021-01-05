#include "CfgStatementNode.h"

std::ostream &CfgStatementNode::print(std::ostream &out) const {
  out << "[Stmt] " << *getData();
  return out;
}
