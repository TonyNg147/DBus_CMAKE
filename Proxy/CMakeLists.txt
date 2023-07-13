project(Proxy)
set(CMAKE_MINIMUM_REQUIRED_VERSION 3.6)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "/home/tony/Qt/6.2.7/gcc_64")
set(CMAKE_AUTOMOC ON)
find_package(Qt6 COMPONENTS DBus Core REQUIRED)
list(APPEND SOURCES HMIAdaptor.cpp
                    HMIInterface.cpp)
# file(GLOB SOURCES )
add_library(Proxy SHARED "${SOURCES}")
set_target_properties(Proxy
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/../Delivery/libraries"
)
target_link_libraries(Proxy PRIVATE Qt6::DBus
                            PRIVATE Qt6::Core)