cmake_minimum_required (VERSION 2.9)


project(arm_cross_exe)

aux_source_directory(. dir_source)

add_subdirectory(block_device)
add_subdirectory(char_device)

add_executable(arm_cross_exe ${dir_source})

target_link_libraries(arm_cross_exe block char)