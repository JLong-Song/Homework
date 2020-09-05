#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#include <winsock.h>

#define MAXLINE 1024
void main()
{
	SOCKET	serv_sd, cli_sd;
  	int   	cli_len, n;
  	char  	str[MAXLINE];

  	struct 	sockaddr_in   	serv, cli;

  	WSADATA wsadata;

  	if (WSAStartup(0x101,(LPWSADATA) &wsadata) != 0) {
    		fprintf(stderr,"echo_srv: can't use WinSock DLL\n");
    		exit(1);
  	}

  	if ( (serv_sd=socket(AF_INET, SOCK_STREAM, 0)) == SOCKET_ERROR) {
    		fprintf(stderr,"echo_srv: can't open TCP socket\n");
    		exit(1);
  	}


   	serv.sin_family      = AF_INET;
   	serv.sin_addr.s_addr = 0;
   	serv.sin_port        = htons(IPPORT_ECHO);


   	if ( bind(serv_sd, (LPSOCKADDR) &serv, sizeof(serv)) <0) {
     		fprintf(stderr, "echo_srv: can't bind local address\n");
     		exit(1);
   	}



   	if ( listen(serv_sd, 5) < 0) {
     		fprintf(stderr,"echo_srv: listen() error\n");
     		exit(1);
   	}


    	cli_len = sizeof(cli);

    	while (1) {
      		printf("echo_srv1: waiting for client\n");
      		cli_sd=accept(serv_sd, (struct sockaddr *)&cli, &cli_len);      ///建立連線
      		if ( cli_sd == SOCKET_ERROR ) {
        		fprintf(stderr, "echo_srv: accpet() error\n");
        		closesocket(cli_sd);
      		} else {
        		while (1) {
          			if ( (n=recv(cli_sd, str, MAXLINE, 0))==0) {        ///接收
            				fprintf(stderr, "echo_srv: connection closed\n");
            				break;
          			} else if (n==SOCKET_ERROR) {

            				fprintf(stderr, "echo_srv: recv() error!\n");
            				break;
          			}

          			str[n]='\0';
          			printf("echo_srv: %s",str);

          			if ( send(cli_sd, str, strlen(str), 0) == SOCKET_ERROR) {       ///送出
            				fprintf(stderr, "echo_srv: connection closed\n");
            				break;
          			}
        		}
      		}
    	}


   	closesocket(serv_sd);
   	closesocket(cli_sd);
   	WSACleanup();
}
