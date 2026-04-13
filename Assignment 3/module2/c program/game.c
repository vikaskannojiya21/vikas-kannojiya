 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

    while (attempts < 7) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Correct! You guessed the number.\n");
            break;
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    if (guess != number) {
        printf("Sorry! The correct number was %d\n", number);
    }

    getch();
    return 0;
}
