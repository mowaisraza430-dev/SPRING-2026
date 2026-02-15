#include<stdio.h>
int main(){
	
	int marks;
	int sub1,sub2,sub3,sub4,sub5;
	int percentage;
	
	printf("Enter Marks of Sub 01: ");
	scanf("%d", &sub1);
	
	printf("Enter Marks of Sub 02: ");
	scanf("%d", &sub2);
	
	printf("Enter Marks of Sub 03: ");
	scanf("%d", &sub3);
	
	printf("Enter Marks of Sub 04: ");
	scanf("%d", &sub4);
	
	printf("Enter Marks of Sub 05: ");
	scanf("%d", &sub5);
	
	marks= sub1+sub2+sub3+sub4+sub5;
	
	percentage = (marks * 100) / 500;
	printf("Your percentage is: %d\n",percentage );
	if(percentage>=85){
		
		printf("Congratulations! You got Full scholarship ");
	}
	else if(percentage>=70){
		printf("You got partial Scholarship ");
	}
	else if(percentage>=50){
		printf("You are Eligible for Consideration ");
		
	}
	else{
		printf("Unfotunately! You are not eligible ");
		
	}
	return 0;
}
	

