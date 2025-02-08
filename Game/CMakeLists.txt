# Game/CMakeLists.txt

add_executable(VIKENGINE
    src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/iosLaunchScreen.storyboard
)

target_link_libraries(VIKENGINE PUBLIC Engine)
# game needs to link against SDL3 too for the main function
target_link_libraries(VIKENGINE PRIVATE SDL3::SDL3)

target_include_directories(VIKENGINE
    PRIVATE "../Libs/SDL/include"
)
# Set C++ standard for Game
# Private to allow different cpp version than engine if wanted
target_compile_features(VIKENGINE PRIVATE cxx_std_23  )