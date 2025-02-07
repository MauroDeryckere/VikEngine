# Engine/CMakeLists.txt

# define engine as static library
add_library(Engine STATIC
    src/Engine.cpp
)


# Expose only the public include directory
target_include_directories(Engine 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"  # API headers
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src"     # Internal headers (not exposed)
)