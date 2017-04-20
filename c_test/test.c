#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>


#define ERROR	-1
#define MAX_CLIENTS		2
#define MAX_DATA		1024


int main(int argc, char **argv) 
{
	int sock, sent;
	int new;
	int data_len;
	int sockaddr_len = sizeof(struct sockaddr_in);
	struct sockaddr_in server, client;
	unsigned int len;
//	char mesg[] = "hello world/!";
	char data[MAX_DATA];

	if((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket: ");
		exit(-1);
	}




	server.sin_family = AF_INET;
	//server.sin_port = htons(10000);
	server.sin_port = htons(atoi(argv[1]));
	server.sin_addr.s_addr = INADDR_ANY;
	//bzero()
	memset(&server.sin_zero, 0, sizeof(server.sin_zero));

	//done with socket
	len = sizeof(struct sockaddr_in);

	if((bind(sock, (struct sockaddr *)&server, len)) == -1)
	{
		perror("bind");
		exit(-1);

	}


	if((listen(sock, 5)) == -1)
	{
		perror("listen");
		exit(-1);

	}


	while(1) //better signal handling required.
	{


		if((new = accept(sock, (struct sockaddr *)&client, &len)) == -1)
		{
			perror("accept");
			exit(-1);
		}

		printf("new client connected from port no %d and IP %s\n",ntohs(client.sin_port), inet_ntoa(client.sin_addr));
		data_len = 1;

		while(data_len)
		{
			data_len = recv(new, data, MAX_DATA, 0);

			if(data_len)
			{
				 send(new, data, data_len, 0);
				 data[data_len] = '\0';
				 printf("sent mesg: %s", data);
			}


		}

		//sent = send(new, mesg, strlen(mesg), 0);
		//printf("Sent %d bytes to client : %s\n", sent, inet_ntoa(client.sin_addr));
		printf("client disconnected\n")
		close(new);
	}



}

