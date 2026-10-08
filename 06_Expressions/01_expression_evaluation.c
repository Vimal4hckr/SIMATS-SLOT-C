/*
	Explanation:
	This program demonstrates expressions in C.
	It shows arithmetic expressions, relational expressions,
	logical expressions and operator precedence.
*/
#include <stdio.h>
int main(){
	int a=10,b=5,c=2;
	int result;
	result=a+b*c;
	printf("Arithmetic Expression : %d\n",result);
	result=(a+b)*c;
	printf("Using Parentheses     : %d\n",result);
	printf("Relational Expression : %d\n",a>b);
	printf("Logical Expression    : %d\n",a>b&&b>c);
	return 0;
}