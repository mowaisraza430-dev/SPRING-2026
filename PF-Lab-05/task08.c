#include <stdio.h>
#include <math.h>

int main() {
    int choice, age;
    float weight, height, bmi, bmr, idealWeight;
    char gender;   

    printf("Health Calculator Menu:\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight (Devine Formula)\n");
    printf("4. Heart Rate Zone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

       
        case 1:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0) {
                bmi = weight / pow(height, 2);
                printf("BMI = %.2f\n", bmi);
            } else {
                printf("Error: Weight and height must be positive\n");
            }
            break;

        
        case 2:
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);
            printf("Enter age: ");
            scanf("%d", &age);
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);

            if (age > 0 && weight > 0 && height > 0) {
                if (gender == 'M' || gender == 'm') {
                    bmr = 88.36 + (13.4 * weight) + (4.8 * height) - (5.7 * age);
                    printf("BMR = %.2f calories/day\n", bmr);
                } else if (gender == 'F' || gender == 'f') {
                    bmr = 447.6 + (9.2 * weight) + (3.1 * height) - (4.3 * age);
                    printf("BMR = %.2f calories/day\n", bmr);
                } else {
                    printf("Error: Invalid gender\n");
                }
            } else {
                printf("Error: Age, weight, and height must be positive\n");
            }
            break;

       
        case 3:
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);
            printf("Enter height (cm): ");
            scanf("%f", &height);

            if (height > 0) {
                if (gender == 'M' || gender == 'm') {
                    idealWeight = 50 + 2.3 * fabs((height - 152) / 2.54);
                } else if (gender == 'F' || gender == 'f') {
                    idealWeight = 45.5 + 2.3 * fabs((height - 152) / 2.54);
                } else {
                    printf("Error: Invalid gender\n");
                    break;
                }
                printf("Ideal Weight = %.2f kg\n", idealWeight);
            } else {
                printf("Error: Height must be positive\n");
            }
            break;

       
        case 4:
            printf("Enter age: ");
            scanf("%d", &age);

            if (age > 0) {
                int maxHR = 220 - age;
                printf("Maximum Heart Rate = %d bpm\n", maxHR);
                printf("Target Zone: %.0f - %.0f bpm\n",
                       maxHR * 0.50, maxHR * 0.85);
            } else {
                printf("Error: Age must be positive\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
