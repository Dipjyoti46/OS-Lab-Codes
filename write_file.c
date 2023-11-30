#include<stdio.h>
int main(){
	char str[100];
	FILE *fp;
	printf("Enter the string: ");
	fgets(str);
	fp=fopen("file1.txt","w+");
	while(!feof(fp)){
		fscanf(fp,"%s",str);
	}
	fprintf(fp,"%s",str);
}
