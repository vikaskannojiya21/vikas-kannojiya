#include <stdio.h>
#include <conio.h>

int isPalindromeNumber(int num) {
    int original = num, reverse = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindromeNumber(num))
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    getch();
    return 0;
}
