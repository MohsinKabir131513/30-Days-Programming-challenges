#include <stdio.h>

int main() {
    int weather_code;

    // Prompt the user to enter the weather condition code
    printf("Enter the weather condition code (1 = Sunny, 2 = Cloudy, 3 = Rainy): ");
    scanf("%d", &weather_code);

    // Use if-else statements to guide the user based on the weather condition
    if (weather_code == 1) {
        printf("It's sunny. Wear light clothing and sunglasses.\n");
    } else if (weather_code == 2) {
        printf("It's cloudy. Bring a light jacket just in case.\n");
    } else if (weather_code == 3) {
        printf("It's rainy. Don't forget your umbrella and raincoat.\n");
    } else {
        printf("Invalid weather code entered. Please enter a valid code (1, 2, or 3).\n");
    }

    return 0;
}
