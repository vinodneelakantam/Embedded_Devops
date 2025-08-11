project( MbedApp VERSION 1.0 LANGUAGES CXX )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

# Specify the source files
set( SOURCES
    main.cpp
)

# Add the executable
add_executable( mbed_app ${SOURCES} )

# Include directories (if any)
# target_include_directories( mbed_app PRIVATE include )

# Link libraries (if any)
# target_link_libraries( mbed_app PRIVATE some_library )