add_library(cfg)

target_sources(cfg PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgNode.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgNode.h
)



target_include_directories(cfg PUBLIC
  ${CMAKE_SOURCE_DIR}/src
  #${CMAKE_SOURCE_DIR}/src/error
  #${CMAKE_SOURCE_DIR}/src/frontend/ast
  #${CMAKE_SOURCE_DIR}/src/frontend/ast/treecfg
  #${CMAKE_SOURCE_DIR}/src/semantic/symboltable
  #${CMAKE_CURRENT_SOURCE_DIR}/concrete
  #${CMAKE_CURRENT_SOURCE_DIR}/constraints
  #${CMAKE_CURRENT_SOURCE_DIR}/solver
)
target_link_libraries(cfg coverage_config loguru)
