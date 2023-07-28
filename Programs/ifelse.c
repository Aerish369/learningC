#include <stdio.h>

int main() {
	int age;
	printf("Enter the age: \n");
	scanf("%d", &age);
	
	if(age>18){
		printf("You are a Voter.");
	}
	else{
		printf("You are not a Voter. ");
	}
}
