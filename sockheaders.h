#ifndef _SOCKHEAEDERS_H_
#define _SOCKHEAEDERS_H_



#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

typedef int socklen_t;
#define close closesocket


#else

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <netdb.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

typedef int SOCKET;
#define NO_ERROR        0
#define INVALID_SOCKET  -1
#define WSAECONNRESET   ECONNRESET
#define WSAEWOULDBLOCK  EAGAIN
#define SOCKET_ERROR    -1

#endif
#endif
