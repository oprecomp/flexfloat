cmake_minimum_required(VERSION 3.1)

project(FlexFloat)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)

#SET(CMAKE_C_COMPILER "/usr/bin/gcc-7")
#SET(CMAKE_CXX_COMPILER "/usr/bin/g++-7")

#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -flto")
#SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -flto")
#set(CMAKE_AR "gcc-ar-7")
#SET(CMAKE_C_ARCHIVE_CREATE "<CMAKE_AR> qcs <TARGET> <LINK_FLAGS> <OBJECTS>")
#SET(CMAKE_C_ARCHIVE_FINISH   true)

set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -DGTEST_HAS_TR1_TUPLE=0 -DGTEST_USE_OWN_TR1_TUPLE=0")
set(CMAKE_C_FLAGS_RELEASE "-O3 -DGTEST_HAS_TR1_TUPLE=0 -DGTEST_USE_OWN_TR1_TUPLE=0 -DNDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -DGTEST_HAS_TR1_TUPLE=0 -DGTEST_USE_OWN_TR1_TUPLE=0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DGTEST_HAS_TR1_TUPLE=0 -DGTEST_USE_OWN_TR1_TUPLE=0 -DNDEBUG")

### Create a static library

set(library_SOURCES
    src/flexfloat.c
)

add_library(flexfloat STATIC ${library_SOURCES})

target_include_directories(flexfloat PUBLIC ${PROJECT_SOURCE_DIR}/include)

option(SINGLE_BACKEND "Use single-precision type (float) as a backend type instead of double precision" OFF)
option(QUAD_BACKEND "Use quad-precision type (_Float128) as a backend type instead of double precision" OFF)
option(DISABLE_ROUNDING "Disable the library support to IEEE rounding modes (truncation is always applied)" OFF)
option(ENABLE_FLAGS "Enable support for floating-point exception flags" OFF)
option(ENABLE_STATS "Enable collection of statistics" OFF)
option(ENABLE_TRACKING "Enable track of error accumulation on program variables" OFF)

if(SINGLE_BACKEND)
    set(FLEXFLOAT_ON_SINGLE ON)
elseif(QUAD_BACKEND)
    set(FLEXFLOAT_ON_QUAD ON)
else()
    set(FLEXFLOAT_ON_DOUBLE ON)
endif()

set(FLEXFLOAT_NO_ROUNDING ${DISABLE_ROUNDING})
set(FLEXFLOAT_FLAGS ${ENABLE_FLAGS})
set(FLEXFLOAT_STATS ${ENABLE_STATS})
set(FLEXFLOAT_TRACKING ${ENABLE_TRACKING})

# Check for __float128 availability
set(float128_check_src
    "int main(int argc, char** argv){ __float128 v = (__float128) argc; return argc; }")
include(CheckCSourceCompiles)
check_c_source_compiles("${float128_check_src}" CC_HAS_FLOAT128)
include(CheckCXXSourceCompiles)
check_cxx_source_compiles("${float128_check_src}" CXX_HAS_FLOAT128)
if(CC_HAS_FLOAT128 AND CXX_HAS_FLOAT128)
    set(FLEXFLOAT_FLOAT128 ON)
endif()
if(FLEXFLOAT_ON_QUAD AND NOT FLEXFLOAT_FLOAT128)
    message(FATAL_ERROR
        "Asked for quadruple precision backend but __float128 isn't available on this platform")
endif()

configure_file(${CMAKE_SOURCE_DIR}/include/flexfloat_config.h.in
    ${CMAKE_SOURCE_DIR}/include/flexfloat_config.h)

### Unit testing

option(BUILD_TESTS "Enable unit testing of FlexFloat" ON)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

### Examples

option(BUILD_EXAMPLES "Build FlexFloat examples" ON)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()
