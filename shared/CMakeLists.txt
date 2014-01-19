project(shared)

add_library(shared SHARED
    chat_message.cpp
    )
target_link_libraries(shared boost_system)

install(TARGETS shared LIBRARY DESTINATION lib)
