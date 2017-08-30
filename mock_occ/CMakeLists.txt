cmake_minimum_required(VERSION 3.7)
set(CMAKE_CXX_STANDARD 11)
add_library(mock_face "MockFace.cpp")
add_library(NamedSolid "NamedSolid.cpp")
target_link_libraries(NamedSolid mock_face)

add_executable(main "main.cpp")
target_link_libraries(main NamedSolid)
