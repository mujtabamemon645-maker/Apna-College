#include <stdio.h>

int main() {
    double data_used, price_per_gb, basic_cost, discount_percent = 0.0, discount_amount, final_cost;

    printf("Enter data used in GB: ");
    scanf("%lf", &data_used);
    printf("Enter price per GB: ");
    scanf("%lf", &price_per_gb);

    basic_cost = data_used * price_per_gb;

    if (data_used < 50.0) {
        discount_percent = 0.0;
    } else if (data_used <= 99.0) {
        discount_percent = 5.0;
    } else if (data_used <= 199.0) {
        discount_percent = 10.0;
    } else {
        discount_percent = 15.0;
    }

    discount_amount = basic_cost * (discount_percent / 100.0);
    final_cost = basic_cost - discount_amount;

    printf("\n--- Billing Summary ---\n");
    printf("1. Basic Cost: $%.2lf\n", basic_cost);
    printf("2. Discount Amount (%.1lf%%): $%.2lf\n", discount_percent, discount_amount);
    printf("3. Final Cost: $%.2lf\n", final_cost);

    return 0;
}