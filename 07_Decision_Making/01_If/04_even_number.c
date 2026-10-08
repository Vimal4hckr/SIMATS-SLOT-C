/*
	Explanation:
	This program checks whether a number is even.
	A number is even when its remainder after division by 2 is zero.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number%2==0){
		printf("Even number");
	}
	return 0;
}