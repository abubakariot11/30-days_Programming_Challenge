#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n for the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci sequence is: %d\n", n, fibonacci(n));
    return 0;
}
