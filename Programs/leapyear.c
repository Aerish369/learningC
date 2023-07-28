#include <stdio.h>

int main(){
	int year;
	printf("Enter the year: \n");
	scanf("%d", &year);
	
	if(year % 4 == 0){
		printf("%d is leap year.", year);
	} else{
		printf("%d is not leap year.", year);
	}
}
