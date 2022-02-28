cmake_minimum_required(VERSION 3.21)

set(X_VCPKG_APPLOCAL_DEPS_INSTALL ON)
project(wxtest0)

set(CMAKE_CXX_STANDARD 14)
#if("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
    add_compile_options("/utf-8")
#    add_compile_options("/subsystem:windows")

#endif()
set(wxBUILD_SHARED OFF)
set(VCPKG_LIBRARY_LINKAGE static)

#if(PORT MATCHES "qt5-")
#    set(VCPKG_LIBRARY_LINKAGE dynamic)
#endif()
find_package(wxWidgets REQUIRED COMPONENTS)
link_directories(vcpkg_installed/x86-windows/bin)
add_executable(wxtest0 WIN32 main.cpp)
target_include_directories(wxtest0 PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(wxtest0 PRIVATE ${wxWidgets_LIBRARIES})
#install(TARGETS wxtest0 )