cmake_minimum_required(VERSION 3.21)

#set(X_VCPKG_APPLOCAL_DEPS_INSTALL ON)
set(CMAKE_BUILD_TYPE "Debug")
project(wxtest0)

set(CMAKE_CXX_STANDARD 14)
if("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
    add_compile_options("/utf-8")
    #add_compile_options("/mt")
#    add_compile_options("/subsystem:windows")

endif()
#SET(CMAKE_EXE_LINKER_FLAGS /NODEFAULTLIB:"libcmtd.lib;libcmt.lib")
#设置静态编译
#set(wxBUILD_SHARED OFF)
#set(VCPKG_CRT_LINKAGE static)
#set(VCPKG_LIBRARY_LINKAGE static)
#set(VCPKG_TARGET_TRIPLET x86-windows-mixed)
find_package(wxWidgets REQUIRED)

add_executable(wxtest0 WIN32 main.cpp)
target_include_directories(wxtest0 PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(wxtest0 PRIVATE ${WX_DEBUG_LIBS})
