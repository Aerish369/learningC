#include <stdio.h>
int main(){
	float p, t , r, interest;
	
	
	printf("Enter Principle: \n");
	scanf("%f", &p);
	
	printf("Enter Time: \n");
	scanf("%f", &t);
	
	printf("Enter Rate: \n");
	scanf("%f", &r);
	
	interest = (p*t*r)/100;
	
	printf("The interest is %f", interest);

	printf("Programmed By Aashish.")
	
}
