#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

void main(){
	int pid;
	pid=fork();
	
	if(pid==0){
		printf("Child process      ");
		printf("Child process id is %d      ", getpid());
		printf("Parents process id is %d    ",getppid());
		sleep(5);
		
		printf("Child process after sleep 5   ");
		printf("Child process id is %d after sleep 5   ", getpid());
		printf("Parents process id is %d after sleep 5  ",getppid());
	}
	else{
	printf("Parent Process");
	sleep(5);
		
	printf("Child process after sleep 5   ");
	printf("Child process id is %d after sleep 5   ", getpid());
	printf("Parents process id is %d after sleep 5  ",getppid());
	}
}
