#include <stdio.h>
#include <conio.h>

int main() {
    int num, n, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter range (N): ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", num);

    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    getch();
    return 0;
}
