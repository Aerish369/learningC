#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: \n");
	scanf("%d", &a);
	
	if (a > 0){
		printf("%d is postive number. ", a);
	} else if (a < 0){
		printf("%d is negative number. ", a);
	} else if (a == 0){
		printf("%d is zero. ", a);
	}
}
