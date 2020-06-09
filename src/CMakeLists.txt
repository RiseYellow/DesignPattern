

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/simple_factory)


aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MAIN_SRC )
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/simple_factory SIMPLE_FACTORY_SRC)

add_executable(design_pattern ${MAIN_SRC} ${SIMPLE_FACTORY_SRC})