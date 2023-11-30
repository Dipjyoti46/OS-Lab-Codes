#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


void main(){
	int pid;
	pid=fork();
	
	if(pid==-1){
		printf("File cannot create");
		exit(-1);
	}
	else if(pid==0){
		printf("Child process\n");
		sleep(5);
		printf("Child process after sleep 5: %d\n", getpid());
		
	}
	else{
		printf("Parents processs\n");
		exit(1);
	}
}
