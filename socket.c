#include <winsock2.h>
#include <stdio.h>

int main(){
    WSADATA data;
    int errcount = WSAStartup(MAKEWORD(2,2),&data);
    if(errcount != 0)    {
            printf("[-]Error initializing winsock! Error code returned:%d\n",WSAGetLastError());
    }
    else    {
            printf("[+]Winsock initialized successfully!\n");
            SOCKET server;
            server = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
            SOCKADDR_IN endpoint;
            endpoint.sin_family = AF_INET;
            endpoint.sin_addr.s_addr = inet_addr("127.0.0.1");
            endpoint.sin_port = htons(80);
            if(bind(server,(SOCKADDR*)&endpoint,sizeof(endpoint))==SOCKET_ERROR)
            {
                printf("[-]Error binding socket address\n");
                return -1;
            }
            else
            {
                printf("[+]Socket address binded successfully\n");
                listen(server,1);
                SOCKET client;
                client = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
                printf("[+]Monitoring for a client\n");
                client = accept(server,NULL,NULL);
                char buffer[100] = "Server:Hey mate!";
                strcpy("Server:Hello there\n",buffer);
                int sent = send(client,buffer,sizeof(buffer),0);
                if(sent==0)
                {
                    printf("[-]Error wrting data! Error:%d\n",WSAGetLastError());
                    return -1;
                }
                else
                {
                    char received[200];
                    int rec = recv(client,received,sizeof(received),0);
                    if(rec==0)
                    {
                        printf("[-]Error writing data! Error:%d\n",WSAGetLastError());
                        return -1;
                    }
                    else
                    {
                        printf("%s",received);
                        closesocket(client);
                        closesocket(server);
                    }
                }
            }
    }
return 0;}
