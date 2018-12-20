#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>

#define handler_error(msg)\
	do {perror(msg);exit(EXIT_FAILURE);}while(0)
int main()
{
int sfd,cfd; 
pid_t pid
struct sockaddr_in sockaddr;
if(ressock = -1)
	handler_error("socket");
memset(&sockaddr,0, sizeof(struct sockaddr_in));
sockaddr.sin._family = AF_INET;
sockaddr.sin_port =htonl(INADDR_ANY);
sockaddr.sin_port = htons(10004);
sfd= socket(AF_INET,SOCK_STREAM, 0);
res = bind(sfd, const (struct sockaddr *)&sockaddr,size(sockaddr));
if(res < 0)
	handler_error("bind");
int resLstn = 0;
reslstn = listen(sfd, 1024);
if(reslstn < 0)
	handler_error("listen");
//creat a new thread to handler the incoming request

pid = fork;
if(pid == 0)
{
int conn = 0;
conn = connect(sfd, (struct sockaddr *)&sockaddr,socklen_t addrlen);
if(conn < 0)
	handler_error("connect");


}

}




