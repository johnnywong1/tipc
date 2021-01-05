#pragma once
#include <set>
#include "AST.h"

class CfgNode {
public:
  static int generateUid();

  CfgNode();
  CfgNode(int id);
  CfgNode(ASTNode * data);

  std::set<CfgNode> const & getPredecessors() const;
  std::set<CfgNode> const & getSuccessors() const;
  ASTNode * getData() const;
  int getId() const;
  bool operator==(CfgNode const & other) const;
  bool operator!=(CfgNode const & other) const;
  friend std::ostream& operator<<(std::ostream& os, const CfgNode& node);

protected:
  virtual std::ostream& print(std::ostream &out) const;

private:
  static int lastUid;

  std::set<CfgNode> predecessors;
  std::set<CfgNode> successors;
  int id;
  ASTNode * data;

};

