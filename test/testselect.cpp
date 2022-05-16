#include <stdio.h>
#include <sys/time.h>
#include <sys/select.h>
#include <unistd.h>

int main(void)
{
    int ret;

    int myfd = STDIN_FILENO;

    
    while (1)
    {
        fd_set fb;
        FD_ZERO(&fb);
        FD_SET(myfd, &fb);

        struct timeval tv;
        tv.tv_sec = 1;
        tv.tv_usec = 1000000; 

        ret = select(myfd+1, &fb, NULL, NULL, &tv);
        if (ret == -1){
            perror("select");
            return -1;
        }else if (ret == 0){
            printf("timeout\n");
        }else if (ret == 1){
            if(FD_ISSET(myfd, &fb)){
                //printf("data\n");
                 char buf[1024];
                 //size_t bytes = fread(buf, 1024, sizeof(char),stdin);
                 size_t bytes = read(myfd, buf, 1024);
                 printf("read %d bytes\n", bytes);
            }else{
                printf("other\n");
            }
            //FD_CLR(myfd, &fb);
        }
    }
        
    return 0;
}
