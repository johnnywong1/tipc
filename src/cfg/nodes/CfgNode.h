#pragma once
#include <set>

class CfgNode {
public:
  static int generateUid();

  CfgNode();
  CfgNode(int id);

  std::set<CfgNode> const & getPredecessors() const;
  std::set<CfgNode> const & getSuccessors() const;
  int getId() const;
  bool operator==(CfgNode const & other) const;
  bool operator!=(CfgNode const & other) const;

private:
  static int lastUid;

  std::set<CfgNode> predecessors;
  std::set<CfgNode> successors;
  int id;
  // TODO (nphair): AST reference.


};

