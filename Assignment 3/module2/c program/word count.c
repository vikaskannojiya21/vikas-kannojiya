#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, words = 0, len = 0, maxLen = 0;
    char longestWord[50], currentWord[50];
    int j = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            currentWord[j] = str[i];
            j++;
            len++;
        } else {
            if (len > 0) {
                words++;
                currentWord[j] = '\0';

                if (len > maxLen) {
                    maxLen = len;
                    strcpy(longestWord, currentWord);
                }

                j = 0;
                len = 0;
            }
        }
        i++;
    }

    if (len > 0) {
        words++;
        currentWord[j] = '\0';

        if (len > maxLen) {
            maxLen = len;
            strcpy(longestWord, currentWord);
        }
    }

    printf("Number of words = %d\n", words);
    printf("Longest word = %s\n", longestWord);

    getch();
    return 0;
}
