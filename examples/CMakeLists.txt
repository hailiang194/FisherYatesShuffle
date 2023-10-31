project(examples)

add_executable(examples main.c)
target_link_libraries(examples PUBLIC suffle)
target_link_directories(examples PUBLIC ${suffle_BINARY_DIR}/include)