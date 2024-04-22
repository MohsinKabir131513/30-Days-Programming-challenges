#include <stdio.h>

int main() {
    char name[100];

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print personalized greeting
    printf("Hello, %s! Nice to meet you.\n", name);

    return 0;
}
