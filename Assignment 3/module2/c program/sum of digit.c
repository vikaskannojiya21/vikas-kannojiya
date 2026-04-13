#include <stdio.h>
#include <conio.h>

int main() {
    int num, original, digit, sum = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);

    getch();
    return 0;
}
