#include <stdio.h>

int main() {
    int size, i, max;
    
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array of given size
    int arr[size];
    
    // Ask the user to fill the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Assume the first element as the maximum
    max = arr[0];
    
    // Find the maximum value in the array
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Print the maximum value
    printf("Maximum value in the array: %d\n", max);
    
    return 0;
}
