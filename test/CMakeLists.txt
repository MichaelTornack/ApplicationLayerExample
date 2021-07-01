enable_testing()

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

file(GLOB Unittests_SRC
     "*.cpp"
)
add_executable(Unittests ${Unittests_SRC})

target_include_directories(Unittests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Unittests
    gtest_main
    CMakeGoogleTestLib
)
