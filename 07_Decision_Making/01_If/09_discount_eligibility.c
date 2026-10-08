/*
	Explanation:
	This program checks whether a customer is eligible for a discount.
	A purchase amount of 5000 or more qualifies for the discount.
*/
#include <stdio.h>
int main(){
	float amount;
	printf("Enter purchase amount: ");
	scanf("%f",&amount);
	if(amount>=5000){
		printf("Discount Available");
	}
	return 0;
}