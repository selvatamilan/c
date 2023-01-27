#include<stdio.h>
int main(){
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age<18){
		printf("You have %d years to vote",18-age);
	}
	else{
		printf("you are edigible");
	}
	return 0;
}

