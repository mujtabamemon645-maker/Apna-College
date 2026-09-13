#include <stdio.h>
int main() {
int Data_used_in_GB;
int price_per_GB;
int Basic_cost;
int discount;
printf("Enter the data used in GB: ");
scanf("%d", &Data_used_in_GB);
printf("Enter the price per GB: ");
scanf("%d", &price_per_GB);
Basic_cost = Data_used_in_GB * price_per_GB;
if ( Data_used_in_GB <50) {
    discount = 0;
}
else if ( Data_used_in_GB >=50 && Data_used_in_GB <100) {
    discount = Basic_cost * 0.05;
}
else if ( Data_used_in_GB >=100 && Data_used_in_GB <200) {
    discount = Basic_cost * 0.1;
}
else {
    discount = Basic_cost * 0.15;

}
printf("The basic cost is: %d\n", Basic_cost);
}