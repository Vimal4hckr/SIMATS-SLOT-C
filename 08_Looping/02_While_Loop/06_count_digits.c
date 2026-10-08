/*
	Explanation:
	This program counts the number of digits in an integer
	using a while loop.
*/
#include <stdio.h>
int main(){
	int number,temp,count=0;
	printf("Enter a number: ");
	scanf("%d",&number);
	temp=number;
		while(temp>0){
			count++;
			temp=temp/10;
		}
	printf("Number of digits: %d",count);
	return 0;
}