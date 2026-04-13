#include <stdio.h>
#include <conio.h>

int main() {
    int arr[10], i, j, temp;
    int max, min;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // Sorting in ascending order (Bubble Sort)
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}
