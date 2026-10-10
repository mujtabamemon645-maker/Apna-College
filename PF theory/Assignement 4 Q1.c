#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal and are the greatest: %.2lf\n", num1);
    } else if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 || num1 == num3)
            printf("Two or more numbers are equal and the greatest: %.2lf\n", num1);
        else
            printf("The greatest number is: %.2lf\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        if (num2 == num1 || num2 == num3)
            printf("Two or more numbers are equal and the greatest: %.2lf\n", num2);
        else
            printf("The greatest number is: %.2lf\n", num2);
    } else {
        printf("The greatest number is: %.2lf\n", num3);
    }

    return 0;
}