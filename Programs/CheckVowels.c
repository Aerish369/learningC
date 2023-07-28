#include <stdio.h>

int main(){
	char str;
	printf("Enter a char: \n");
	scanf("%c", &str);
	
	if (str == 'a' || str == "e" || str == 'i' || str == 'o' || str == 'u'){
		printf("It is vowel. ");
	} else {
		printf("It is consonant. ");
	}	
	
}
