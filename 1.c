#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Input height in meters
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Check for valid height
    if (height <= 0) {
        printf("Height must be greater than zero.\n");
        return 1;
    }

