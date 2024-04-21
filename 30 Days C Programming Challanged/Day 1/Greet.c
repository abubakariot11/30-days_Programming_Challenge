#include <stdio.h>

int main() {
    char name[50];

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%49s", name); // Read the name from the user, limit input to 49 characters to avoid buffer overflow

    // Print personalized greeting
    printf("Hello, %s! Welcome to our program.\n", name);

    return 0;
}
