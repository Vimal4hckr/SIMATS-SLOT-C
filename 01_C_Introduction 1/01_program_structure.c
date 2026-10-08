/*
	Explanation:
	This program demonstrates the basic structure of a C program.
	It shows the preprocessor directive, main() function, variable declaration,
	input, processing, and output.
*/
#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	printf("Your marks are: %d",marks);
	return 0;
}