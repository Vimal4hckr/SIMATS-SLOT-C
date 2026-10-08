/*
	Explanation:
	This program uses switch to select a unit conversion
	from a menu and performs the selected conversion.
*/
#include <stdio.h>
int main(){
	int choice;
	float value;
	printf("===== Unit Conversion =====\n");
	printf("1. Kilometer to Meter\n");
	printf("2. Meter to Kilometer\n");
	printf("3. Kilogram to Gram\n");
	printf("4. Gram to Kilogram\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	printf("Enter value: ");
	scanf("%f",&value);
	switch(choice){
		case 1:
			printf("Result: %.2f meters",value*1000);
			break;
		case 2:
			printf("Result: %.2f kilometers",value/1000);
			break;
		case 3:
			printf("Result: %.2f grams",value*1000);
			break;
		case 4:
			printf("Result: %.2f kilograms",value/1000);
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}