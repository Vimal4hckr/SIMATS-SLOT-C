/*
	Explanation:
	This program checks whether an employee is eligible for a bonus.
	Employees with a salary below 30000 are considered eligible.
*/
#include <stdio.h>
int main(){
	float salary;
	printf("Enter salary: ");
	scanf("%f",&salary);
	if(salary<30000){
		printf("Bonus Eligible");
	}
	return 0;
}