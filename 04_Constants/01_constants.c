/*
	Explanation:
	This program demonstrates constants using const and #define.
	Constant values cannot be changed during program execution.
*/
#include <stdio.h>
#define COLLEGE_CODE 101
int main(){
	const float PI=3.14159;
	const int MAX_MARKS=100;
	printf("College Code : %d\n",COLLEGE_CODE);
	printf("PI           : %.5f\n",PI);
	printf("Maximum Marks: %d",MAX_MARKS);
	return 0;
}