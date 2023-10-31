cmake_minimum_required(VERSION 3.1)
project(suffle VERSION 1.0.0)

set(BUILD_EXAMPLES ON)

set(suffle_public_headers
    src/FisherYatesShuffle.h
)

set(suffle_sources
    src/FisherYatesShuffle.c
)

add_library(suffle ${suffle_public_headers} ${suffle_sources})
file(COPY ${suffle_public_headers} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

if(${BUILD_EXAMPLES} )
    add_subdirectory(examples)
endif()