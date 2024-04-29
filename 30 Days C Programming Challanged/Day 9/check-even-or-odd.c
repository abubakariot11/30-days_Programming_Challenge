#include <stdio.h>

// Function declaration
int isEven(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to check if the number is even or odd
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

// Function definition to check if a number is even
int isEven(int num) {
    return num % 2 == 0;
}
