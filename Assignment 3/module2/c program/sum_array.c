#include <stdio.h>
#include <conio.h>

int main() {
    int n, i;
    float arr[100], sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", avg);

    getch();
    return 0;
}
