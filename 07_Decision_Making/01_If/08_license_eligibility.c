/*
	Explanation:
	This program checks whether a person is eligible to apply for
	a driving license based on age.
*/
#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("Eligible for Driving License");
	}
	return 0;
}