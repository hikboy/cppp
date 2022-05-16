#include <stdio.h>
#include <sys/time.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <netinet/in.h> 
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

int clientSelect(char *ip ,int port , int count)
{
    int sd = 0 ;
    int fd = 0;

    fd_set readfds;
    int i ,j , ret;
    char recvBuf[1024] = "";
    char errMsg[256] = "" ;
    struct sockaddr_in server ;

    // Socket Initialization
    fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd == -1){
        printf("socket error\n");
        return -1;
    }

    int flags =1;
    //setsockopt(fd, SOL_TCP, TCP_NODELAY, (void *)&flags, sizeof(flags));
    setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (void *)&flags, sizeof(flags));

    //Server info
    server.sin_addr.s_addr  = inet_addr(ip);
    server.sin_family       = AF_INET;
    server.sin_port         = htons(port);


    // Conect to server
    if (connect(fd, (struct sockaddr *)&server , sizeof(server)) < 0){
        printf("connect ::Failed to connect to server %s:%d\n",ip ,port);
        return -1;
    }       
    printf("start to connet to server %s:%d\n",ip ,port);

    while(1) {

        struct timeval tv;
        tv.tv_sec = 1;
        tv.tv_usec = 50000;

        // init fd_set
        FD_ZERO(&readfds); // added by siva to initialize socket descriptors
        FD_SET(fd, &readfds); 

        ret = select(fd + 1, &readfds, NULL, NULL, &tv);
        if (ret < 0) {
            printf("select failed\n ");
            return -1;
        }else if (ret == 0) {
            printf("timeout\n");
        }else{
            sd = fd;
            if (FD_ISSET(sd, &readfds)) {
                ret = recv(sd,(char *)recvBuf,sizeof(recvBuf), 0);
                if(ret > 0 ) {
                    printf("Message received from socket %d : %s\n",sd,recvBuf);
                    send(sd,(char *)recvBuf, strlen(recvBuf),0);
                }
            }else{
                printf("other\n");
            }
        }

    }

    return ret ;
}

int main()
{
    int port = 10001;
    char *ip = "192.168.2.12";
    int count = 2 ;
    int ret = clientSelect(ip,port,count);
    return 0 ;
}  