/*
	Explanation:
	This program verifies whether the entered password matches
	the predefined password.
*/
#include <stdio.h>
#include <string.h>
int main(){
	char password[30];
	printf("Enter password: ");
	scanf("%s",password);
	if(strcmp(password,"admin123")==0){
		printf("Login Successful");
	}
	else{
		printf("Invalid Password");
	}
	return 0;
}