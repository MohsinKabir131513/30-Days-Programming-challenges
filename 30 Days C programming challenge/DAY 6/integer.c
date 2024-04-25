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
    
    // Print the array
    printf("The array you entered is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
