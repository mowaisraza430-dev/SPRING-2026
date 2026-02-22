#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter four sides of the quadrilateral:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("Not a valid quadrilateral\n");
    }
    else {
       
        if (a == b && b == c && c == d) {
            printf("Square\n");
        }
       
        else if (a == c && b == d) {
            printf("Rectangle\n");
        }
        else {
            printf("General Quadrilateral\n");
        }
    }

    return 0;
}
