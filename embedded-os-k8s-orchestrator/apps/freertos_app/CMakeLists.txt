cmake_minimum_required(VERSION 3.10)

# Set the project name
project(freertos_app)

# Specify the source files
set(SOURCES
    main.c
)

# Add an executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories (if any)
# target_include_directories(${PROJECT_NAME} PRIVATE include)

# Link libraries (if any)
# target_link_libraries(${PROJECT_NAME} PRIVATE some_library)