/*
	Explanation:
	This program demonstrates logical operators in C.
	Logical operators combine or reverse conditions.
	Operators: &&, ||, !
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two values (0 or 1): ");
	scanf("%d%d",&a,&b);
	printf("a && b : %d\n",a&&b);
	printf("a || b : %d\n",a||b);
	printf("!a     : %d\n",!a);
	printf("!b     : %d",!b);
	return 0;
}