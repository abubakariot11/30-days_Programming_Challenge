#include <stdio.h>

int main() {
    int size, i;
    
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
    
    // Print the array
    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
