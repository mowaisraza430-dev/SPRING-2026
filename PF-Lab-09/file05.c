#include <stdio.h>

float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);

int main() {
    float kwh, mj, btu, cal;

    printf("Enter energy in kWh: ");
    scanf("%f", &kwh);

    mj = toMegajoules(kwh);
    btu = toBTU(kwh);
    cal = toCalories(kwh);

    printf("\n----- Conversion Report -----\n");
    printf("kWh: %.2f\n", kwh);
    printf("Megajoules: %.2f MJ\n", mj);
    printf("BTU: %.2f\n", btu);
    printf("Calories: %.2f\n", cal);

    printf("\nDirect Function Call (Chaining Example):\n");
    printf("MJ (direct): %.2f\n", toMegajoules(kwh));

    return 0;
}

float toMegajoules(float kwh) {
    return kwh * 3.6;
}

float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845;
}
