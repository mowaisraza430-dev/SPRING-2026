#include<stdio.h>
int main(){
	
	int total_purchase;
	
	printf("Enter total purchase amount: ");
	scanf("%d",&total_purchase);
	
	if(total_purchase>=5000){
		
		printf("You received 20 percent discount ");
	}
	else if(total_purchase>=3000){
		
		printf("You received 10 percent discount ");
		
	}
	else{
		printf("No discount available ");
	} 
	return 0;
}

