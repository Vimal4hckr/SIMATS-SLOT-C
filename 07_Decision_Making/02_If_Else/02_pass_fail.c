/*
	Explanation:
	This program checks whether a student has passed or failed.
	A mark of 40 or above is considered a pass.
*/
#include <stdio.h>
int main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks>=40){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
	return 0;
}