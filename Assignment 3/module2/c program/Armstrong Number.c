#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int num, original, remainder, result, n, temp, i;

    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num);

    original = num;
    temp = num;
    result = 0;
    n = 0;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    printf("\nArmstrong numbers between 1 and 1000 are:\n");

    for (i = 1; i <= 1000; i++) {
        original = i;
        temp = i;
        result = 0;
        n = 0;

        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = i;

        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == original) {
            printf("%d ", i);
        }
    }

    getch();
    return 0;
}
