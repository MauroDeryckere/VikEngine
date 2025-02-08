# Engine/CMakeLists.txt

# define engine as static library
add_library(Engine STATIC
    src/Engine.cpp
    "include/Asserts.h")

target_link_libraries(Engine PRIVATE Libs)

# Expose only the public include directory
target_include_directories(Engine 
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"  # API headers
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src"     # Internal headers (not exposed)
)

target_include_directories(Engine
    PRIVATE "../Libs/SDL/include"
)

# Set C++ standard for Engine
target_compile_features(Engine PUBLIC cxx_std_23)