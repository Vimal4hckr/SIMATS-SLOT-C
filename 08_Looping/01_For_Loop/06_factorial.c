/*
	Explanation:
	This program calculates the factorial of a number using a for loop.
*/
#include <stdio.h>
int main(){
	int n=5,i;
	unsigned long long factorial=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("Factorial: %llu",factorial);
	return 0;
}