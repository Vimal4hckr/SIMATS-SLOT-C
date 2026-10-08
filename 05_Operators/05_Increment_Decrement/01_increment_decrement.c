/*
	Explanation:
	This program demonstrates increment and decrement operators.
	Prefix changes the value before using it.
	Postfix uses the value first and then changes it.
*/
#include <stdio.h>
int main(){
	int a=10,b=10;
	printf("Initial a       : %d\n",a);
	printf("Prefix ++a       : %d\n",++a);
	printf("Current a        : %d\n",a);
	printf("Postfix a++      : %d\n",a++);
	printf("Current a        : %d\n",a);
	printf("\nInitial b        : %d\n",b);
	printf("Prefix --b       : %d\n",--b);
	printf("Current b        : %d\n",b);
	printf("Postfix b--      : %d\n",b--);
	printf("Current b        : %d",b);
	return 0;
}