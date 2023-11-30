#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

void main(){
	int pid;
	pid=fork();

	if(pid<0){
		printf("Cannot create the file\n");
		exit(-1);
	}
	else if(pid==0){
		printf("Child process\n");
		exit(0);
	}
	else{
		printf("Parents process\n");
	}
}
