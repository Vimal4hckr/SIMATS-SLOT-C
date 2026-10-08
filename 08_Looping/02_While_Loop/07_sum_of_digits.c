/*
	Explanation:
	This program calculates the sum of all digits in a number
	using a while loop.
*/
#include <stdio.h>
int main(){
	int number,temp,sum=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	temp=number;
	while(temp>0){
		sum=sum+(temp%10);
		temp=temp/10;
	}
	printf("Sum of digits: %d",sum);
	return 0;
}