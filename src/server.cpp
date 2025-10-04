#include <sys/socket.h>
#include <arpa/inet.h>
#include "http_tcpServer.hpp"



int main()
{
    using namespace http;
    TcpServer server = TcpServer("0.0.0.0", 8080);
    server.startListen();
    return 0;
}