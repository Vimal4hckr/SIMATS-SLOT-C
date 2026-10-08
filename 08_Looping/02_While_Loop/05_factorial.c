/*
	Explanation:
	This program calculates the factorial of a number using a while loop.
*/
#include <stdio.h>
int main(){
	int n,i=1;
	unsigned long long factorial=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n){
		factorial=factorial*i;
		i++;
	}
	printf("Factorial: %llu",factorial);
	return 0;
}