#include<stdio.h>
main(){
	
	int num;
	float a,b,calc;
	
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	
	printf("Enter the number\n1 for Addition\n2 for Substraction\n3 for multiplication\n4 for division\n");
	scanf("%d",&num);

    switch (num) {
        case 1:
            calc=a+b;
            printf("The answer is %f\n",calc);
            break;
        case 2:
            calc=a-b;
            printf("The answer is %f\n",calc);
            break;
        case 3:
            calc=a*b;
            printf("The answer is %f\n",calc);
            break;
        case 4:
            calc=a/b;
            printf("The answer is %f\n",calc);
            break;

        default:
            printf("Invalid number. Please enter a number between 1 and 4.");
            break;
    }

}
