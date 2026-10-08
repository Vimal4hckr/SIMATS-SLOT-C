/*
	Explanation:
	This program compares the cost price and selling price.
	If the selling price is greater, there is a profit.
	Otherwise, there is a loss.
*/
#include <stdio.h>
int main(){
	float cost_price,selling_price;
	printf("Enter cost price: ");
	scanf("%f",&cost_price);
	printf("Enter selling price: ");
	scanf("%f",&selling_price);
	if(selling_price>cost_price){
		printf("Profit");
	}
	else{
		printf("Loss");
	}
	return 0;
}