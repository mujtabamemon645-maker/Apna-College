#include <stdio.h>

int main() {
    char name[100];

    // Sample Input
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Expected Output
    printf("Hello,\n%s", name);

    return 0;
}