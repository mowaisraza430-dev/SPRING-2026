#include <stdio.h>

int main() {
    int n, i;
    int total_Items = 0;

    printf("Enter the number of boxes (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        total_Items = total_Items + i;  
    }

    printf("Total decorative items required for %d boxes = %d\n", n, total_Items);

    return 0;
}
