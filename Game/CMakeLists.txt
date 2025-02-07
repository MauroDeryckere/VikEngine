# Game/CMakeLists.txt

add_executable(Game
    src/main.cpp
)

target_link_libraries(Game PRIVATE Engine)