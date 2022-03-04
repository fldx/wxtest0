cmake_minimum_required(VERSION 3.21)


project(wxtest0)

set(CMAKE_CXX_STANDARD 14)
#if("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
    add_compile_options("/utf-8")
#    add_compile_options("/subsystem:windows")

#endif()


set(X_VCPKG_APPLOCAL_DEPS_INSTALL ON)
set(wxBUILD_SHARED OFF)
set(VCPKG_LIBRARY_LINKAGE static)

find_package(wxWidgets REQUIRED COMPONENTS)
link_directories(vcpkg_installed/x86-windows/bin)
add_executable(wxtest0 WIN32 main.cpp)
target_include_directories(wxtest0 PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(wxtest0 PRIVATE ${wxWidgets_LIBRARIES})
install(TARGETS wxtest0
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        )