#include <stdio.h>

int main() {
    int size;
    
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Declare an array of integers with the specified size
    int arr[size];
    
    // Fill the array with user input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Find the maximum value in the array
    int max = arr[0];  // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Print the maximum value
    printf("The maximum value in the array is: %d\n", max);
    
    return 0;
}
