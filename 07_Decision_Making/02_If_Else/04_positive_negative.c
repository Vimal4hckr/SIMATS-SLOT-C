/*
	Explanation:
	This program checks whether a number is positive or negative.
	Zero is included with the positive side for this basic example.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number>=0){
		printf("Positive");
	}
	else{
		printf("Negative");
	}
	return 0;
}