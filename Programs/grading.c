#include <stdio.h>

int main(){
	int account, c, micro, english, math, grade;
	printf("What is marks of account: \n");
	scanf("%d", &account);
	
	printf("What is marks of C: \n");
	scanf("%d", &c);
	
	printf("What is marks of Micro-processor: \n");
	scanf("%d", &micro);
	
	printf("What is marks of English: \n");
	scanf("%d", &english);
	
	printf("What is marks of Math: \n");
	scanf("%d", &math);
	
	grade = ((account + c + micro + english + math) * 100) / 500;
	
	if (grade>= 90 && grade <= 100){
		printf("Your grade is A+. ");
	}else if(grade >= 80 && grade < 90){
		printf("Your grade is A. ");
	}else if (grade >= 70 && ){
		printf("Your grade is B+. ");
	}else if (grade > 60){
		printf("Your grade is B. ");
	}else if (grade > 50){
		printf("Your grade is C+. ");
	}else if (grade > 40){
		printf("Your grade is C. ");
	}else if (40 > grade){
		printf("You have failed. ");
	}
}
