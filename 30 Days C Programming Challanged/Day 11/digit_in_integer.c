#include <stdio.h>

int count_digits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int digit_count = count_digits(number);
    printf("Number of digits in %d is %d\n", number, digit_count);

    return 0;
}
