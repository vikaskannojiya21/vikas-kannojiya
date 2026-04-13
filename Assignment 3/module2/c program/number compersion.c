#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest, smallest;

    // Largest
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Smallest
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    getch();
    return 0;
}
