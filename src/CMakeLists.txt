

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/behavioral_mode)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MAIN_SRC )
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/simple_factory SIMPLE_FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/factory FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/abstract_factory ABSTRACT_FACTORY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/builder BUILDER_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/prototype PROTOTYPE_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/creative_mode/singleton SINGLETON_SRC)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/adapter ADAPTER_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/decorator DECORATOR_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/bridge BRIDGE_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/compose COMPOSE_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/facade FACADE_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/flyweight FLYWEIGHT_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/structural_mode/proxy PROXY_SRC)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/behavioral_mode/chain_of_responsibility CHAIN_OF_RESPOINSIBILITY_SRC)

add_executable(design_pattern 
#creative mode
    ${MAIN_SRC} 
    ${SIMPLE_FACTORY_SRC}
    ${FACTORY_SRC} 
    ${ABSTRACT_FACTORY_SRC} 
    ${BUILDER_SRC} 
    ${PROTOTYPE_SRC}
    ${SINGLETON_SRC}


#structural mode
    ${ADAPTER_SRC}
    ${DECORATOR_SRC}
    ${BRIDGE_SRC}
    ${COMPOSE_SRC}
    ${FACADE_SRC}
    ${FLYWEIGHT_SRC}
    ${PROXY_SRC}

#behavioral_mode
    ${CHAIN_OF_RESPOINSIBILITY_SRC}
)