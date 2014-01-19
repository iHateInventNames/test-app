project(server)

add_executable(server main.cpp)

install(TARGETS server RUNTIME DESTINATION bin)
