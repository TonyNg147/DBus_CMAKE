project(Provider)
set(CMAKE_MINIMUM_REQUIRED_VERSION 3.6)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "/home/tony/Qt/6.2.7/gcc_64")
set(CMAKE_AUTOMOC ON)
find_package(Qt6 COMPONENTS Quick DBus REQUIRED)
list(APPEND SOURCES main.cpp 
                    Controller/Controller.cpp)
qt6_add_executable(Provider "${SOURCES}")
qt6_add_qml_module(Provider
    URI               "HMI"
    VERSION           1.0
    RESOURCE_PREFIX   "/"
    QML_FILES         main.qml
)
target_link_directories(Provider PRIVATE "${PROJECT_BINARY_DIR}/../Delivery/libraries")
target_include_directories(Provider PRIVATE ${PROJECT_SOURCE_DIR}/../Proxy)
target_link_libraries(Provider PRIVATE Qt6::Quick 
                               PRIVATE Qt6::DBus
                               PRIVATE Proxy)
set_target_properties(Provider
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/../Delivery
)