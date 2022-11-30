add_executable(typing_rhythm_game Main.cc AudioHandler.cc WordGetter.cc Game.cc Conductor.cc Window.cc TextOutput.cc)
include_directories(../include)
#include_directories(/opt/homebrew/include)
#link_directories(/opt/homebrew/lib/)


#find_package(SFML COMPONENTS window graphics system audio network)
#target_compile_definitions(typing_rhythm_game PRIVATE SFML_STATIC)
#set(SFML_STATIC_LIBRARIES TRUE)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

target_link_libraries(typing_rhythm_game PRIVATE sfml-graphics sfml-audio)
target_compile_features(typing_rhythm_game PRIVATE cxx_std_17)
if (WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET typing_rhythm_game POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:typing_rhythm_game> $<TARGET_FILE_DIR:typing_rhythm_game> COMMAND_EXPAND_LISTS)
endif()

