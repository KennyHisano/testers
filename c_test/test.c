#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>

main() 
{
	int sock cli;
	struct sockaddr_in server, client;
	int len;

	if((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket: ");
		exit(-1);
	}




	server.sin_family = AF_INET;
	server.sin_port = htons(10000);
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


	while(1)
	{


		if((cli = accept())



	}


}