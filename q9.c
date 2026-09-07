#include <stdio.h>

int main() {
    char product_name[50];
    int quantity;
    float price;

    // Sample Input
    printf("Enter product name: ");
    scanf("%s", product_name);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    // Expected Output
    printf("\nProduct Name: %s\n", product_name);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price); // %.2f forces exactly 2 decimal places

    return 0;
}