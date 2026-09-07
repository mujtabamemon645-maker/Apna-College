#include <stdio.h>

int main() {
    float temperature;

    // Sample Input
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    // Expected Output (%.2f handles the 2 decimal places in C!)
    printf("Temperature: %.2f C\n", temperature);

    return 0;
}