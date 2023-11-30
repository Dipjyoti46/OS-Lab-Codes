#include<stdio.h>
 int main(){
 	char  str[100];
 	FILE *fp;
 	fp=fopen("file1.txt","r");
 	while(!feof(fp)){
 		fscan(fp,"%s", str);
 		printf("%s",str);
 	}	
 		fclose(fp);
 }
