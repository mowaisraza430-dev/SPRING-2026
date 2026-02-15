#include<stdio.h>
int main(){
	
	int attendance;
	
	printf("Enter attendance percentage: ");
	scanf("%d",&attendance);
	
	if(attendance>=75){
		
		printf("Congratulations! You are Selected for the tournament. ");
		}
	else{
		printf("Unfortunately! You are not selected. ");
	}
	return 0;
}

