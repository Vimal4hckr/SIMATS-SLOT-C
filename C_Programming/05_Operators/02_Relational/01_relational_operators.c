/*
	Explanation:
	This program demonstrates relational operators in C.
	Relational operators compare two values and produce 1 for true
	and 0 for false.
	Operators: >, <, >=, <=, ==, !=
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("a > b  : %d\n",a>b);
	printf("a < b  : %d\n",a<b);
	printf("a >= b : %d\n",a>=b);
	printf("a <= b : %d\n",a<=b);
	printf("a == b : %d\n",a==b);
	printf("a != b : %d",a!=b);
	return 0;
}