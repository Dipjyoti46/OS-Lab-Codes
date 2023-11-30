#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>


void main(){
	int i=10;
	int pid=fork();
	
	if(pid==0){
		printf("Initital Value of i is %d\n", i);
		i+=10;
		printf("value of i %d", i);
		printf("Child Terminated");
		
	}
	else{
		wait(0);
		printf("Value of i in parent process is %d ",i);
	}
}
