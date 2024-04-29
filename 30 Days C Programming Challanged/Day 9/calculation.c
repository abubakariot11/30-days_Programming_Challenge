#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to calculate the sum
    int result = sum(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition to calculate the sum
int sum(int a, int b) {
    return a + b;
}
