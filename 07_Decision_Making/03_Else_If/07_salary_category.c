/*
	Explanation:
	This program categorizes an employee based on salary.
*/
#include <stdio.h>
int main(){
	float salary;
	printf("Enter salary: ");
	scanf("%f",&salary);
	if(salary<20000){
		printf("Entry Level");
	}
	else if(salary<=40000){
		printf("Mid Level");
	}
	else if(salary<=70000){
		printf("Senior Level");
	}
	else{
		printf("High Level");
	}
	return 0;
}