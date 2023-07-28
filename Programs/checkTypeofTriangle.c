#include <stdio.h>

int main(){
	int x, y, z; //Defining int
	printf("Enter the first side of triangle. \n");//Prompting user for three sides of triangle
	scanf("%d", &x);
	
	printf("Enter the second side of triangle. \n");
	scanf("%d", &y);
	
	printf("Enter the third side of triangle. \n");
	scanf("%d", &z);
	
	if(x + y > z || y + z > x || x + z > y){ //Checking if triangle exists or not. 
	
		if ( x == y && y == z && z == x){
			printf("Given triangle is Equilateral Triangle. "); //Checking type of triangle using if-else statement
		}else if(x == y || y == z || z == x){
			printf("Given triangle is Isosceles Triangle. ");
		}else{
			printf("Given triangle is Scalene Triangle.");
		}
	} else{
		printf("Invalid Triangle. Please enter correct values for the triangle. ");
	}
	
}
