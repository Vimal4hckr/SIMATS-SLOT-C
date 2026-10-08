/*
	Explanation:
	This program demonstrates basic input and output in C.
	It accepts different types of data from the user and displays them.
*/
#include <stdio.h>
int main(){
	char name[50],department[50];
	int age,roll_number;
	float percentage;
	printf("Enter student name: ");
	scanf(" %[^\n]",name);
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter roll number: ");
	scanf("%d",&roll_number);
	printf("Enter department: ");
	scanf(" %[^\n]",department);
	printf("Enter percentage: ");
	scanf("%f",&percentage);
	printf("\n--- Student Information ---\n");
	printf("Name       : %s\n",name);
	printf("Age        : %d\n",age);
	printf("Roll Number: %d\n",roll_number);
	printf("Department : %s\n",department);
	printf("Percentage : %.2f%%",percentage);
	return 0;
}