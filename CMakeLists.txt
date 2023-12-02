cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_VERSION 1.0.0)
project(pie VERSION ${PROJECT_VERSION})

file(GLOB LIBRARY_SOURCES
  "src/pie/*.cpp"
)

add_library(pie STATIC ${LIBRARY_SOURCES})

set_target_properties(pie PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin
)

target_include_directories(pie PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# install(TARGETS pie
#   EXPORT pieTergets
#   LIBRARY DESTINATION lib
#   ARCHIVE DESTINATION lib
#   RUNTIME DESTINATION bin
#   INCLUDES DESTINATION include
# )

# install(DIRECTORY include/ DESTINATION include)