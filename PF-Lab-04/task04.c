#include<stdio.h>
#include<string.h>
int main(){
	
char username[05];
int password;

printf("Enter username: ");
scanf("%s", username);

printf("Enter password: ");
scanf("%d",&password);


if(strcmp (username, "user" )== 0 && password == 7890){
	printf("Connected Successfully ");
	
}
else{
	
	printf("Connection Failed ");
}
		return 0;
}


