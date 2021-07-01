
file(GLOB CMakeGoogleTest_SRC
     "*.cpp"
)

# Lib used to link with google_test
add_library(CMakeGoogleTestLib ${CMakeGoogleTest_SRC})

target_include_directories(CMakeGoogleTestLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# Main Executable. In this case not needed
add_executable(CMakeGoogleTest main.cpp)

target_link_libraries(CMakeGoogleTest PRIVATE CMakeGoogleTestLib)





