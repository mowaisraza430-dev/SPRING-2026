#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    printf("------ Math Operations -------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of number\n");
    printf("6. Cube of  number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus (Remainder of two numbers)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            else
            {
                printf("uNfortunately ! Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Square = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1 * num1;
            printf("Cube = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if(num1 >= 0)
            {
                result = sqrt(num1);
                printf("Square Root = %.2lf\n", result);
            }
            else
            {
                printf("No ! You  Cannot find square root of a negative number.\n");
            }
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Absolute Value = %.2lf\n", result);
            break;

        case 10:
            printf("Enter two integers: ");
            scanf("%lf %lf", &num1, &num2);
            if((int)num2 != 0)
            {
                printf("Remainder = %d\n", (int)num1 % (int)num2);
            }
            else
            {
                printf("No !  Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Select a valid option.\n");
    }

    return 0;
}

