#include <stdio.h>
#define PI 3.146

int main(){
	float area , r; //Defining required floats
	
	printf("Enter the value of radius: \n"); //Prompting user for radius as input
	scanf("%f", &r);
	
	area = PI * r * r; //Calculaing Area
	
	printf("The area of the given circle is %f", area); //Returning Output
	
	printf("Programmed By Aashish")
}
