/*
	Explanation:
	This program demonstrates bitwise operators in C.
	Bitwise operators work directly on the binary representation of integers.
	Operators: &, |, ^, ~, <<, >>
*/
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	printf("a & b  : %d\n",a&b);
	printf("a | b  : %d\n",a|b);
	printf("a ^ b  : %d\n",a^b);
	printf("~a     : %d\n",~a);
	printf("a << 1 : %d\n",a<<1);
	printf("a >> 1 : %d",a>>1);
	return 0;
}