/*
	Explanation:
	This program categorizes annual income into different
	income slabs using else-if conditions.
*/
#include <stdio.h>
int main(){
	float income;
	printf("Enter annual income: ");
	scanf("%f",&income);
	if(income<250000){
		printf("No Tax Slab");
	}
	else if(income<=500000){
		printf("Low Income Slab");
	}
	else if(income<=1000000){
		printf("Middle Income Slab");
	}
	else{
		printf("High Income Slab");
	}
	return 0;
}