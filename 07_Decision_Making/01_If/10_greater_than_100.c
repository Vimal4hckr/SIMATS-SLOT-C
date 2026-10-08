/*
	Explanation:
	This program checks whether the entered number is greater than 100.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number>100){
		printf("Number is greater than 100");
	}
	return 0;
}