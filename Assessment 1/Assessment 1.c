#include <stdio.h>
#include <conio.h>
void main() {
    int choice, quantity;
    char order;
    float price, amount, total;

    do {
        // Menu display
        printf("\n--- Menu ---\n");
        printf("1. Pizza - 250\n");
        printf("2. Burger - 100\n");
        printf("3. Sandwich - 150\n");
        printf("4. Pasta - 200\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Item selection
        if(choice == 1) {
            printf("You have selected Pizza\n");
            price = 250;
        }
        else if(choice == 2) {
            printf("You have selected Burger\n");
            price = 100;
        }
        else if(choice == 3) {
            printf("You have selected Sandwich\n");
            price = 150;
        }
        else if(choice == 4) {
            printf("You have selected Pasta\n");
            price = 200;
        }
        else {
            printf("Invalid choice! Try again.\n");
            continue;  // menu repeat
        }

        // Quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Amount calculation
        amount = price * quantity;
        total += amount;

        printf("Amount for this item: %.2f\n", amount);
        printf("Total amount so far: %.2f\n", total);

        // Ask for more orders
        printf("Do you want to place more order? (y/n): ");
        scanf(" %c", &order);  // space to skip newline

    } while(order == 'y' || order == 'Y');  // loop until user types 'y'/'Y'

    printf("Final Total Amount: %.2f\n", total);


}
