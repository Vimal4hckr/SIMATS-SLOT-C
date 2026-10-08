/*
	Explanation:
	This program demonstrates the conditional or ternary operator.
	The ternary operator is a short form of a simple conditional expression.
	Syntax: condition ? expression1 : expression2
*/
#include <stdio.h>
int main(){
	int a,b,greater;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	greater=(a>b)?a:b;
	printf("Greater number: %d",greater);
	return 0;
}