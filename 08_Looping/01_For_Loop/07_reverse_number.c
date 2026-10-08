/*
	Explanation:
	This program reverses the digits of a number using a for loop.
*/
#include <stdio.h>
int main(){
	int number,temp,reverse=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	temp=number;
	if(temp<0){
		temp=-temp;
	}
	for(;temp>0;temp=temp/10){
		reverse=reverse*10+(temp%10);
	}
	if(number<0){
		reverse=-reverse;
	}
	printf("Reversed number: %d",reverse);
	return 0;
}