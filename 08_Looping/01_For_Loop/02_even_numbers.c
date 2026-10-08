/*
	Explanation:
	This program prints all even numbers from 1 to N using a for loop.
*/
#include <stdio.h>
int main(){
	int n,i;
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	return 0;
}