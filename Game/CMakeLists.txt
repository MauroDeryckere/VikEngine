# Game/CMakeLists.txt

add_executable(Game
    src/main.cpp
)
# Alias VIKENGINE to the actual executable
add_executable(VIKENGINE ALIAS Game)

target_link_libraries(Game PRIVATE Engine)

# Set C++ standard for Game
# Private to allow different cpp version than engine if wanted
target_compile_features(Game PRIVATE cxx_std_23  )
