#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#include <winsock.h>

#define MAXLINE 1024

void main()
{
  SOCKET        	sd;
  struct sockaddr_in    serv;
  char  		str[MAXLINE];
  int   		n, serv_len, number=1;
  WSADATA 		wsadata;



  if (WSAStartup(0x101,(LPWSADATA) &wsadata) != 0) {
    	fprintf(stderr,"echo_srv: WSAStartup() fails!");
    	exit(1);
  }


  serv.sin_family       = AF_INET;
  serv.sin_addr.s_addr  = inet_addr("127.0.0.1");
  serv.sin_port         = htons(IPPORT_ECHO);

  serv_len=sizeof(serv);

  if ( (sd=socket(AF_INET, SOCK_DGRAM, 0)) == SOCKET_ERROR) {
    	fprintf(stderr,"echo_cli: can't open tcp socket\n");
    	exit(1);
  }



  while(1) {
        sprintf(str, "%d", number);     ///型別轉換

    	if ( sendto(sd, str, strlen(str)+1, 0, (LPSOCKADDR) &serv, sizeof(serv)) == SOCKET_ERROR) {     ///傳送
    		fprintf(stderr, "echo_cli: send() error!\n");
      		break;
    	}

    	if ( (n=recvfrom(sd, str, MAXLINE, 0, (LPSOCKADDR) &serv, &serv_len))==0) {     ///接收
      		fprintf(stderr,"echo_cli: connection closed\n");
      		break;
    	} else if (n==SOCKET_ERROR) {
      		fprintf(stderr,"echo_cli: recv() error!\n");
      		break;
    	} else
    		printf(str);
    		printf("\n");
        if(number==1000) break;     ///達到1000中止
        number++;
  }


   closesocket(sd);
   WSACleanup();
}
