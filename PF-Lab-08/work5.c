#include <stdio.h>

int main() {
    int a[5][5], b[5][5];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int square = (r == c);
    int zero = 1, identity = 1, diagonal = 1, scalar = 1;
    int upper = 1, lower = 1, symmetric = 1, skew = 1;
    int rowM = (r == 1), colM = (c == 1);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {

            if (a[i][j] != 0) zero = 0;

            if (i != j && a[i][j] != 0) diagonal = 0;

            if (i == j && a[i][j] != 1) identity = 0;
            if (i != j && a[i][j] != 0) identity = 0;

            if (i == j && a[i][j] != a[0][0]) scalar = 0;
            if (i != j && a[i][j] != 0) scalar = 0;

            if (i > j && a[i][j] != 0) upper = 0;
            if (i < j && a[i][j] != 0) lower = 0;

            if (square) {
                if (a[i][j] != a[j][i]) symmetric = 0;
                if (a[i][j] != -a[j][i]) skew = 0;
            }
        }
    }

    int det = 0;
    if (square && r == 3) {
        det =
        a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) -
        a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
        a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }

    int singular = (square && r == 3 && det == 0);

    int equal = 0;
    printf("Do you want to compare another matrix? (1=yes/0=no): ");
    scanf("%d", &equal);

    int same = 1;
    if (equal == 1) {
        printf("Enter second matrix:\n");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                scanf("%d", &b[i][j]);
                if (a[i][j] != b[i][j]) same = 0;
            }
        }
    }

    printf("\nMatrix Types:\n");

    if (square) printf("Square Matrix\n");
    else printf("Rectangular Matrix\n");

    if (zero) printf("Zero Matrix\n");
    if (zero) printf("Null Matrix\n");

    if (identity) printf("Identity Matrix\n");
    if (diagonal) printf("Diagonal Matrix\n");
    if (scalar && square) printf("Scalar Matrix\n");

    if (upper && square) printf("Upper Triangular Matrix\n");
    if (lower && square) printf("Lower Triangular Matrix\n");

    if (symmetric && square) printf("Symmetric Matrix\n");
    if (skew && square) printf("Skew-Symmetric Matrix\n");

    if (square && r == 3) {
        if (singular) printf("Singular Matrix\n");
        else printf("Non-Singular Matrix\n");
    }

    if (rowM) printf("Row Matrix\n");
    if (colM) printf("Column Matrix\n");

    if (equal == 1) {
        if (same) printf("Equal Matrix\n");
        else printf("Not Equal Matrix\n");
    }

    return 0;
}
