add_executable(cfg_unit_tests)
target_sources(cfg_unit_tests PUBLIC
        # First test defines CATCH_CONFIG_MAIN
        ${CMAKE_CURRENT_SOURCE_DIR}/nodes/CfgNodeTest.cpp
)

target_link_libraries(cfg_unit_tests cfg)
