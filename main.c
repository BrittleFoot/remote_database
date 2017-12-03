#include <stdio.h>

#include "sockheaders.h"
#include "socklib.h"


int main(int argc, char const *argv[]) {   
    startup();

    SOCKET sock = tcp_socket();
    struct sockaddr_in addr;
    set_address(&addr, "0.0.0.0", 65156);

    int err;

    if ((err = tcp_bind(sock, &addr)) != NO_ERROR) return err;
    if ((err = tcp_listen(sock, 5))   != NO_ERROR) return err;
    SOCKET accepted = tcp_accept(sock, &addr);

    printf("Accepted %d\n", (int) accepted);

    close(accepted);
    close(sock);
    cleanup();
    return 0;
}