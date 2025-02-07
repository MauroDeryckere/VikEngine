# Game/CMakeLists.txt

add_executable(Game
    src/main.cpp
)

target_include_directories(Game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(Game PRIVATE Engine)