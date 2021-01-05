#include "CfgNode.h"

CfgNode::CfgNode() : id(CfgNode::generateUid()) {}

CfgNode::CfgNode(int id) : id(id) {}

CfgNode::CfgNode(ASTNode * data) : data(data), id(CfgNode::generateUid()) { }

int CfgNode::lastUid = 0;

int CfgNode::generateUid() {
  return ++lastUid;
}

std::set<CfgNode> const & CfgNode::getPredecessors() const {
  return predecessors;
}

std::set<CfgNode> const & CfgNode::getSuccessors() const {
  return successors;
}

int CfgNode::getId() const {
  return id;
}

bool CfgNode::operator==(CfgNode const &other) const {
  auto otherCfgNode = dynamic_cast<const CfgNode *>(&other);
  if(!otherCfgNode) {
    return false;
  }

  return otherCfgNode->id == id;
}

bool CfgNode::operator!=(CfgNode const &other) const {
  return false;
}

ASTNode *CfgNode::getData() const {
  return data;
}

std::ostream &operator<<(std::ostream &os, const CfgNode &node) {
  return node.print(os);
}

std::ostream &CfgNode::print(std::ostream &out) const {
  out << "[Node] " << *getData();
}


