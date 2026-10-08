/*
	Explanation:
	This program checks whether a number is positive.
	It uses a simple if statement.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number>0){
		printf("Positive number");
	}
	return 0;
}