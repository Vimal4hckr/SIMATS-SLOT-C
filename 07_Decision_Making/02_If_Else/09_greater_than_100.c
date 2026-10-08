/*
	Explanation:
	This program checks whether a number is greater than 100
	or 100 and below.
*/
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number>100){
		printf("Greater than 100");
	}
	else{
		printf("100 or Below");
	}
	return 0;
}