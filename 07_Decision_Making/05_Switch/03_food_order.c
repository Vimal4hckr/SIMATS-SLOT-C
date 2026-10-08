/*
	Explanation:
	This program displays a food item based on the menu choice
	selected by the user.
*/
#include <stdio.h>
int main(){
	int choice;
	printf("===== Food Menu =====\n");
	printf("1. Pizza\n");
	printf("2. Burger\n");
	printf("3. Pasta\n");
	printf("4. Sandwich\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("You selected Pizza");
			break;
		case 2:
			printf("You selected Burger");
			break;
		case 3:
			printf("You selected Pasta");
			break;
		case 4:
			printf("You selected Sandwich");
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}