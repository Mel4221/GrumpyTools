#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "GrumpyTools::GrumpyTools" for configuration ""
set_property(TARGET GrumpyTools::GrumpyTools APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(GrumpyTools::GrumpyTools PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libGrumpyTools.so"
  IMPORTED_SONAME_NOCONFIG "libGrumpyTools.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS GrumpyTools::GrumpyTools )
list(APPEND _IMPORT_CHECK_FILES_FOR_GrumpyTools::GrumpyTools "${_IMPORT_PREFIX}/lib/libGrumpyTools.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
