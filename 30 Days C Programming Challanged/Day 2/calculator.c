#include <stdio.h>

int main() {
    float num1, num2, sum, average;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Calculate the average
    average = sum / 2;

    // Display the sum and average
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);
    printf("Average of %.2f and %.2f is: %.2f\n", num1, num2, average);

    return 0;
}
