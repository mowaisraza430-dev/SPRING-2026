#include <stdio.h>

int main() {
    int Int;
    float Float;
    char Char;

    printf("Enter an integer: ");
    scanf("%d", &Int);

    printf("Enter a float: ");
    scanf("%f", &Float);

    printf("Enter a character: ");
    scanf(" %c", &Char); 

   
    printf("\nYou entered integer: %d\n", Int);
    printf("You entered float: %f\n", Float);
    printf("You entered character: %c\n", Char);

    return 0;
}

