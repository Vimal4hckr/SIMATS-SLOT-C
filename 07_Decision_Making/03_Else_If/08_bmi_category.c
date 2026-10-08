/*
	Explanation:
	This program accepts BMI and categorizes it using else-if conditions.
*/
#include <stdio.h>
int main(){
	float bmi;
	printf("Enter BMI: ");
	scanf("%f",&bmi);
	if(bmi<18.5){
		printf("Underweight");
	}
	else if(bmi<25){
		printf("Normal");
	}
	else if(bmi<30){
		printf("Overweight");
	}
	else{
		printf("Obese");
	}
	return 0;
}