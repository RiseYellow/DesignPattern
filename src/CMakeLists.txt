

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/create_mode)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MAIN_SRC )
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/create_mode/simple_factory SIMPLE_FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/create_mode/factory FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/create_mode/abstract_factory ABSTRACT_FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/create_mode/builder BUILDER_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/create_mode/prototype PROTOTYPE_SRC)

add_executable(design_pattern 
    ${MAIN_SRC} 
    ${SIMPLE_FACTORY_SRC}
    ${FACTORY_SRC} 
    ${ABSTRACT_FACTORY_SRC} 
    ${BUILDER_SRC} 
    ${PROTOTYPE_SRC}
 )