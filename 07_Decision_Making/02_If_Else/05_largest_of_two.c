/*
	Explanation:
	This program accepts two numbers and displays the larger number.
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("Largest: %d",a);
	}
	else{
		printf("Largest: %d",b);
	}
	return 0;
}