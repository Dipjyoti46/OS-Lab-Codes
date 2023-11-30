#include<stdio.h>
#include<stdlib.h>
 void main(){
 	int id;
 	if(id=create("create.txt",0)==-1){
 		printf("File cannot create");
 		exit(1);
 	}
 	else{
 		printf("File is created");
 		exit(1);
 	}
 }
 
