
#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Convert binary to decimal
    while (binaryNum > 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        binaryNum /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}
