/*
	Explanation:
	This program checks whether a number is positive, negative,
	or zero using else-if.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number>0){
		printf("Positive");
	}
	else if(number<0){
		printf("Negative");
	}
	else{
		printf("Zero");
	}
	return 0;
}