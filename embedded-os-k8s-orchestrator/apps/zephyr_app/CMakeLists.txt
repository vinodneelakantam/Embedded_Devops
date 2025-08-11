project(zephyr_app C)

set(SOURCES
    main.c
)

# Include Zephyr's CMake configuration
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
include_directories(${ZEPHYR_INCLUDE_DIRS})

# Add the executable
add_executable(zephyr_app ${SOURCES})

# Link against Zephyr libraries
target_link_libraries(zephyr_app ${ZEPHYR_LIBRARIES})