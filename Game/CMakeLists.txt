# Game/CMakeLists.txt

add_executable(VIKENGINE
    src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/iosLaunchScreen.storyboard
)

target_link_libraries(VIKENGINE PRIVATE Engine)

# Set C++ standard for Game
# Private to allow different cpp version than engine if wanted
target_compile_features(VIKENGINE PRIVATE cxx_std_23  )
