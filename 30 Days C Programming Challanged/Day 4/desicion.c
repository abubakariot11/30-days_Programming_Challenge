#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to the decision-making program!\n");
    printf("Please enter 1 or 2:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose option 1.\n");
    } else if (choice == 2) {
        printf("You chose option 2.\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
