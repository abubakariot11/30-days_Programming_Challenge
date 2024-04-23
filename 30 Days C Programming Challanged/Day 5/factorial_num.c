#include <stdio.h>

int main() {
    int number, factorial = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Print the factorial
    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}
