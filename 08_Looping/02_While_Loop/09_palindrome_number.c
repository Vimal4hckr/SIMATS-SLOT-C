/*
	Explanation:
	This program checks whether a number is a palindrome.
	A palindrome number remains the same when its digits are reversed.
*/
#include <stdio.h>
int main(){
	int number,temp,reverse=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	temp=number;
	while(temp>0){
		reverse=reverse*10+(temp%10);
		temp=temp/10;
	}
	if(number==reverse){
		printf("Palindrome Number");
	}
	else{
		printf("Not a Palindrome Number");
	}
	return 0;
}