/*
	Explanation:
	This program categorizes electricity usage based on the
	number of units consumed.
*/
#include <stdio.h>
int main(){
	int units;
	printf("Enter units consumed: ");
	scanf("%d",&units);
	if(units<=100){
		printf("Low Usage");
	}
	else if(units<=200){
		printf("Medium Usage");
	}
	else if(units<=500){
		printf("High Usage");
	}
	else{
		printf("Very High Usage");
	}
	return 0;
}