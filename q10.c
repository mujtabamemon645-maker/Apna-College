#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    char grade;
    float cgpa;

    // Sample Input
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    // Clean out the leftover "Enter" key so the char grade doesn't get skipped
    while ((getchar()) != '\n');

    printf("Enter grade: ");
    scanf("%c", &grade);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    // Expected Output
    printf("\n--- Student Report ---\n");
    printf("Name:   %s", name); // fgets automatically keeps the newline
    printf("Age:    %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade:  %c\n", grade);
    printf("CGPA:   %.2f\n", cgpa);

    return 0;
}