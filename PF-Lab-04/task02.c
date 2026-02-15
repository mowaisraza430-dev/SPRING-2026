#include<stdio.h>
int main(){
	
	int data;
	
	printf("Enter Total GB used: ");
	scanf("%d",&data);
	
	if(data<=50){
		printf("Basic User ");
		
	}
	else if(data>50 && data<151){
		
		printf("Standard User ");

	}
	
	else{
		printf("Heavy User ");
		
	}
	
	
		return 0;
}



