#include <stdio.h>
#include <conio.h>

int main() {
    int num, n, i, j, flag;

    printf("Enter a number to check prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
    } else {
        flag = 0;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is a prime number\n", num);
        else
            printf("%d is not a prime number\n", num);
    }

    printf("\nEnter a number to print primes up to: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", i);
    }

    getch();
    return 0;
}
