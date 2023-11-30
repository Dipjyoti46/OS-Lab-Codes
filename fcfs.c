#include<stdio.h>
struct fcfs{
	int pid,ser,wait,tottime;	
}p[20];

int main(){
	int n,i,j,totalwait,totalser,avturn,avwait;
	
	printf("Enter the number of process: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Enter pid for process number %d: ",i);
		scanf("%d", &p[i].pid);
		printf("Enter the service time for %d : ",p[i].pid);
		scanf("%d",&p[i].ser);
		
	}
	p[1].wait=0;
	p[1].tottime=p[1].wait+p[1].ser;
	
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			p[i].wait=p[j].wait+p[j].ser;
		}
			totalwait=totalwait+p[i].wait;
			p[i].tottime=p[i].wait+p[i].ser;
			totalser=totalser+p[i].ser;
		
	}
	avturn=totalser/n;
	avwait=totalwait/n;
	printf("\npid\tser\twait\tturnwaround\n");
	for(i=1;i<=n;i++){
		printf("\n%d\t%d\t%d\t%d\n", i,p[i].ser,p[i].wait,p[i].tottime);
		
	}
	return 0;

}
