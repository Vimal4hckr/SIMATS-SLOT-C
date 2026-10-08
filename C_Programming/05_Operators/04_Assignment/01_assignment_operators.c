/*
	Explanation:
	This program demonstrates assignment operators in C.
	Assignment operators assign or update values stored in variables.
	Operators: =, +=, -=, *=, /=, %=
*/
#include <stdio.h>
int main(){
	int value;
	printf("Enter a number: ");
	scanf("%d",&value);
	printf("Original value : %d\n",value);
	value+=5;
	printf("After += 5     : %d\n",value);
	value-=3;
	printf("After -= 3     : %d\n",value);
	value*=2;
	printf("After *= 2     : %d\n",value);
	value/=2;
	printf("After /= 2     : %d\n",value);
	value%=5;
	printf("After %%= 5     : %d",value);
	return 0;
}