/*
	Explanation:
	This program counts how many even and odd digits are present in a number.
	It extracts each digit using % 10 and removes it using / 10.
*/
#include <stdio.h>
int main(){
	int number,digit,even=0,odd=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	while(number!=0){
		digit=number%10;
		if(digit%2==0)
			even++;
		else
			odd++;
		number=number/10;
	}
	printf("Even digits: %d\n",even);
	printf("Odd digits: %d",odd);
	return 0;
}