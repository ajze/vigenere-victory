set(SOURCE_FILES main.cpp)
add_executable(VigenereVictory ${SOURCE_FILES})
target_link_libraries(VigenereVictory Lib1)
target_include_directories(VigenereVictory PUBLIC "../../")

