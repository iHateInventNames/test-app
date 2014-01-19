project(client)

add_executable(client chat_client.cpp main.cpp)
target_link_libraries(client shared pthread)

install(TARGETS client RUNTIME DESTINATION bin)
