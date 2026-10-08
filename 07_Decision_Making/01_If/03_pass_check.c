/*
	Explanation:
	This program checks whether a student has passed.
	A mark of 40 or above is considered a pass.
*/
#include <stdio.h>
int main(){
	int mark;
	printf("Enter mark: ");
	scanf("%d",&mark);
	if(mark>=40){
		printf("Pass");
	}
	return 0;
}