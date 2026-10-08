/*
	Explanation:
	This program checks whether the temperature is above 40 degrees Celsius.
	If it is above 40, a high temperature warning is displayed.
*/
#include <stdio.h>
int main(){
	float temperature;
	printf("Enter temperature: ");
	scanf("%f",&temperature);
	if(temperature>40){
		printf("High Temperature Warning");
	}
	return 0;
}