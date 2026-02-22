#include<stdio.h>
int main(){
	
	int fitness_score;
	int age;
	
	printf("Enter fitness score: ");
	scanf("%d",&fitness_score );
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(fitness_score>=85){
		
		if(age<25){
			printf("You got 40 percent discount. ");
		}
		else{
			printf("You got 25 percent discount. ");
		}
	}
	
	else{
		if(fitness_score>=70 && age<30){
			printf("You got 15 percent discount. ");
		}
		else{
			printf("No discount. ");
		}
	}
	return 0;
}
