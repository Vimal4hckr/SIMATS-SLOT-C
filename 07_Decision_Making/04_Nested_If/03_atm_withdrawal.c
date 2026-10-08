/*
	Explanation:
	This program first verifies the ATM PIN.
	If the PIN is correct, it checks whether sufficient balance
	is available for the requested withdrawal.
*/
#include <stdio.h>
int main(){
	int pin,correct_pin=1234;
	float balance=25000,amount;
	printf("Enter PIN: ");
	scanf("%d",&pin);
	if(pin==correct_pin){
		printf("Enter withdrawal amount: ");
		scanf("%f",&amount);
		if(amount<=balance){
			printf("Withdrawal Successful\n");
			printf("Remaining Balance: %.2f",balance-amount);
		}
		else{
			printf("Insufficient Balance");
		}
	}
	else{
		printf("Incorrect PIN");
	}
	return 0;
}