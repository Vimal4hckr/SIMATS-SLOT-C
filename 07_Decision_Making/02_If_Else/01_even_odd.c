/*
	Explanation:
	This program checks whether a number is even or odd.
	If the remainder after division by 2 is zero, the number is even.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
	return 0;
}