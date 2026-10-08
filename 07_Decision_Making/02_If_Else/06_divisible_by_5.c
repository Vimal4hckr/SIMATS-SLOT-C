/*
	Explanation:
	This program checks whether a number is divisible by 5.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number%5==0){
		printf("Divisible by 5");
	}
	else{
		printf("Not Divisible by 5");
	}
	return 0;
}