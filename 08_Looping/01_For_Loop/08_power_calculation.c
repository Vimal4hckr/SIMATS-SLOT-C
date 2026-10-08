/*
	Explanation:
	This program calculates the power of a number using a for loop.
*/
#include <stdio.h>
int main(){
	int base,exponent,i;
	long long result=1;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("Enter exponent: ");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++){
		result=result*base;
	}
	printf("Result: %lld",result);
	return 0;
}