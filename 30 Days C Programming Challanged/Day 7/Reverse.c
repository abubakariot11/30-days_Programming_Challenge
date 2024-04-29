#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    length = strlen(str);

    printf("Reversed string: ");
    // Print the string in reverse order
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
