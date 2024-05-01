# Config file for GrumpyTools library

# Set package information
set(PACKAGE_NAME GrumpyTools)
set(PACKAGE_VERSION 1.0.1)

# Define variables
set(GRUMPYTOOLS_INCLUDE_DIRS "/usr/include")
set(GRUMPYTOOLS_LIBRARY_DIRS "/usr/lib")

# Provide package information
include(CMakeFindDependencyMacro)
include("${CMAKE_CURRENT_LIST_DIR}/GrumpyToolsTargets.cmake")
