/*
	Explanation:
	This program first checks whether the person is 18 or older.
	If eligible, it then checks whether the person has a valid voter ID.
*/
#include <stdio.h>
int main(){
	int age,has_id;
	printf("Enter age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("Do you have a valid voter ID? (1-Yes, 0-No): ");
		scanf("%d",&has_id);
		if(has_id==1){
			printf("Eligible to Vote");
		}
		else{
			printf("Voter ID Required");
		}
	}
	else{
		printf("Not Eligible to Vote");
	}
	return 0;
}