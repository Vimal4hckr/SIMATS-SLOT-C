/*
	Explanation:
	This program categorizes temperature into cold, normal,
	warm, or hot using else-if.
*/
#include <stdio.h>
int main(){
	float temperature;
	printf("Enter temperature: ");
	scanf("%f",&temperature);
	if(temperature<15){
		printf("Cold");
	}
	else if(temperature<=25){
		printf("Normal");
	}
	else if(temperature<=35){
		printf("Warm");
	}
	else{
		printf("Hot");
	}
	return 0;
}