/*
	Explanation:
	This program prints numbers from 1 to N using a while loop.
*/
#include <stdio.h>
int main(){
	int n,i=1;
	printf("Enter N: ");
	scanf("%d",&n);
	while(i<=n){
		printf("%d ",i);
		i++;
	}
	return 0;
}