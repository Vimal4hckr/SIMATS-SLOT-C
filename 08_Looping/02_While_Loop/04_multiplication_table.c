/*
	Explanation:
	This program prints the multiplication table of a number
	from 1 to 10 using a while loop.
*/
#include <stdio.h>
int main(){
	int number,i=1;
	printf("Enter a number: ");
	scanf("%d",&number);
	while(i<=10){
		printf("%d x %d = %d\n",number,i,number*i);
		i++;
	}
	return 0;
}