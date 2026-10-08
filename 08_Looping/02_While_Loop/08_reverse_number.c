/*
	Explanation:
	This program reverses the digits of a number using a while loop.
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
	if(number<0){
		reverse=-reverse;
	}
	printf("Reversed number: %d",reverse);
	return 0;
}