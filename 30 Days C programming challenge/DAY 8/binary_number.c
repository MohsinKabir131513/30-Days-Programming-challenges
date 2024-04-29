#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

int main() {
    int binaryNumber;
    
    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    
    // Call the function to convert binary to decimal
    int decimalNumber = binaryToDecimal(binaryNumber);
    
    // Print the result
    printf("Decimal equivalent: %d\n", decimalNumber);
    
    return 0;
}
