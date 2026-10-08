/*
	Explanation:
	This program demonstrates arithmetic operators in C.
	Arithmetic operators are used to perform mathematical calculations.
	Operators: +, -, *, /, %
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Addition       : %d\n",a+b);
	printf("Subtraction    : %d\n",a-b);
	printf("Multiplication  : %d\n",a*b);
	printf("Division        : %d\n",a/b);
	printf("Remainder       : %d",a%b);
	return 0;
}