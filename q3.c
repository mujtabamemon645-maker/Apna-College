#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    // Sample Input
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    // Clean out the leftover "Enter" key so the char grade doesn't skip
    while ((getchar()) != '\n');

    printf("Enter grade: ");
    scanf("%c", &grade);

    // Expected Output
    printf("\nAge: %d\n", age);
    printf("Height: %.2f\n", height); // %.2f ensures exactly 2 decimal places
    printf("Grade: %c\n", grade);

    return 0;
}