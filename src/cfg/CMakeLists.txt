add_library(cfg)

target_sources(cfg PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgAfterCallNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgAfterCallNode.h
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgCallNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgCallNode.h
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgFunctionEntryNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgFunctionEntryNode.h
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgFunctionExitNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgFunctionExitNode.h
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgNode.h
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgStatementNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgStatementNode.h
)

target_include_directories(cfg PUBLIC
  ${CMAKE_SOURCE_DIR}/src
  ${CMAKE_SOURCE_DIR}/src/frontend/ast
)
target_link_libraries(cfg coverage_config loguru ast)
