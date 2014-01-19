project(server)

SET(${this_target}_HEADER_FILES
    chat_room.hpp
    chat_session.hpp
    chat_server.hpp
    )
    
add_executable(server
    chat_room.cpp
    chat_server.cpp 
    chat_session.cpp 
    main.cpp)

    
target_link_libraries(server ${shared_libs})

install(TARGETS server RUNTIME DESTINATION bin)
