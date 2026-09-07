#include <stdio.h>

int main() {
    char name[100];
    int age;
    char city[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("City: %s", city);

    return 0;
}ss