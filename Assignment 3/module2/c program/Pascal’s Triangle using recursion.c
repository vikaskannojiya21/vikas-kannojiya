#include <stdio.h>
#include <conio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }

        printf("\n");
    }

    getch();
    return 0;
}
