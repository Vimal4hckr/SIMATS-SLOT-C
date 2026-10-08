/*
	Explanation:
	This program calculates the sum of natural numbers from 1 to N
	using a while loop.
*/
#include <stdio.h>
int main(){
	int n,i=1,sum=0;
	printf("Enter N: ");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("Sum: %d",sum);
	return 0;
}