/*
	Explanation:
	This program first checks whether the student has passed.
	If passed, it checks whether the student has scored 75 or above.
*/
#include <stdio.h>
int main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks>=40){
		if(marks>=75){
			printf("Pass with Distinction");
		}
		else{
			printf("Pass");
		}
	}
	else{
		printf("Fail");
	}
	return 0;
}