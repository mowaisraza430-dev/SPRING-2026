#include <stdio.h>

int main() {
    float salary, incentive;
    int years;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &years);

    incentive = (years > 15) ? (salary * 0.35) :
                (years > 7)  ? (salary * 0.20) :
                               (salary * 0.05);

    printf("Incentive Amount: Rs. %.2f\n", incentive);

    return 0;
}
