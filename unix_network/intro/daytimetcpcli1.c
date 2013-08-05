#include "../unp/unp.h"

int main(int argc, char const *argv[])
{
	// printf("%d\n", MAX_LINE);
	int sockfd, n;
	char *host = "127.0.0.1";
	char recvline[MAX_LINE + 1];

	struct sockaddr_in servaddr;

	//create TCP socket.
	if((sockfd = socket(AF_INET, SOCK_STREAM, 0))<0){
		printf("socket error");
	}
	// printf("sockfd is %d\n", sockfd);

	//initialize the memory of servaddr area.
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(13);
	if(inet_pton(AF_INET, host, &servaddr.sin_addr) <= 0){
		printf("inet_pton error for %s", host);
	}

	if(connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) < 0){
		printf("connect error");
	}
	while ( (n=read(sockfd, recvline, MAX_LINE)) > 0){
		recvline[n] = 0;
		if(fputs(recvline, stdout) == EOF){
			printf("fputs error\n");
		}
	}

	if(n < 0){
		printf("read error.\n");
	}
	printf("finished.\n");
	return 0;


}