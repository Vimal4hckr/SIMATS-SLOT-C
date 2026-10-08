/*
	Explanation:
	This program checks whether a year is a leap year.
	A year is a leap year if it is divisible by 400,
	or divisible by 4 but not divisible by 100.
*/
#include <stdio.h>
int main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
	return 0;
}