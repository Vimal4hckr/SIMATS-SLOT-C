/*
	Explanation:
	This program uses switch to perform an arithmetic operation
	based on the operator entered by the user.
*/
#include <stdio.h>
int main(){
	float a,b;
	char operator;
	printf("Enter two numbers: ");
	scanf("%f%f",&a,&b);
	printf("Enter operator (+, -, *, /): ");
	scanf(" %c",&operator);
	switch(operator){
		case '+':
			printf("Result: %.2f",a+b);
			break;
		case '-':
			printf("Result: %.2f",a-b);
			break;
		case '*':
			printf("Result: %.2f",a*b);
			break;
		case '/':
			if(b!=0){
				printf("Result: %.2f",a/b);
			}
			else{
				printf("Cannot divide by zero");
			}
			break;
		default:
			printf("Invalid Operator");
	}
	return 0;
}