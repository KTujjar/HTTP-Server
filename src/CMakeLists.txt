add_executable(server 
    server.cpp
    websocket/http_tcpServer.cpp
)

target_include_directories(server PUBLIC 
${CMAKE_SOURCE_DIR}/src
${CMAKE_SOURCE_DIR}/src/websocket
)
