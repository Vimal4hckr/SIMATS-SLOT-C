/*
	Explanation:
	This program demonstrates variables and basic data types in C.
	It uses int, float, double, char and long data types.
*/
#include <stdio.h>
int main(){
	int age=21;
	float height=5.8f;
	double salary=45000.75;
	char grade='A';
	long population=1400000000L;
	printf("Integer Value   : %d\n",age);
	printf("Float Value     : %.2f\n",height);
	printf("Double Value    : %.2lf\n",salary);
	printf("Character Value : %c\n",grade);
	printf("Long Value      : %ld",population);
	return 0;
}