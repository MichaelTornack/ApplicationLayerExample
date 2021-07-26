
file(GLOB PROJECT_SRC
     "*.cpp"
)

# Lib used to link with google_test
add_library(${PROJECT_NAME}Lib ${PROJECT_SRC})

target_include_directories(${PROJECT_NAME}Lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME}Lib
  PUBLIC Qt5::Core
  )


# Main Executable. In this case not needed
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}Lib)





