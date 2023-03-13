#include <stdio.h>
#include <winsock2.h>

int main() {
    WSADATA wsa_data;
    SOCKET server_socket;
    struct sockaddr_in server_addr;

    // Inicializar Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0) {
        printf("Error al inicializar Winsock\n");
        return 1;
    }

    // Crear el socket
    server_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (server_socket == INVALID_SOCKET) {
        printf("Error al crear el socket\n");
        WSACleanup();
        return 1;
    }

    // Configurar la dirección del servidor
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

    // Conectar al servidor
    if (connect(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
        printf("Error al conectar al servidor\n");
        closesocket(server_socket);
        WSACleanup();
        return 1;
    }

    // Enviar y recibir datos
    // ...

    // Cerrar el socket y finalizar Winsock
    closesocket(server_socket);
    WSACleanup();

    return 0;
}