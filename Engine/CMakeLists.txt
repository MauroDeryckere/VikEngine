# Engine/CMakeLists.txt

# define engine as static library
add_library(Engine STATIC
    src/Engine.cpp
)

target_include_directories(Engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")