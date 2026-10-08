/*
	Explanation:
	This program uses switch to display a description based
	on the grade entered by the user.
*/
#include <stdio.h>
int main(){
	char grade;
	printf("Enter grade (A/B/C/D/F): ");
	scanf(" %c",&grade);
	switch(grade){
		case 'A':
		case 'a':
			printf("Excellent");
			break;
		case 'B':
		case 'b':
			printf("Very Good");
			break;
		case 'C':
		case 'c':
			printf("Good");
			break;
		case 'D':
		case 'd':
			printf("Pass");
			break;
		case 'F':
		case 'f':
			printf("Fail");
			break;
		default:
			printf("Invalid Grade");
	}
	return 0;
}