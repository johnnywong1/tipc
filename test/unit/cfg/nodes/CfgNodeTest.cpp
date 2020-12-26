#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CfgNode.h"

TEST_CASE("CfgNode: test default constructor uses uid strategy", "[Cfg]") {
  CfgNode node1;
  CfgNode node2;

  REQUIRE_FALSE(node1 == node2);
}

TEST_CASE("CfgNode: test nodes are compared by id", "[Cfg]") {
  CfgNode node1A(1);
  CfgNode node1B(1);
  CfgNode node2(2);

  REQUIRE(node1A == node1B);
  REQUIRE_FALSE(node1A == node2);
}
