#include<stdio.h>
void main(){
	int i,j,k;
	printf("enter the value of k");
	scanf("%d",&k);
	for(i=0;i<k;i++){
		for(j=0;j<k+1;j++) {
			if(j<=k-i-1)
			printf("");
			else
		printf("*");}
		printf("\n");
	}
}
