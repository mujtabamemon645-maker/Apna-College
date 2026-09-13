#include <stdio.h>
int main() {
int obstacle;
int person;
int battery;
printf("Is there an obstacle in front of you? (1 for yes, 0 for no): ");
scanf("%d", &obstacle);
printf("Is there a person in front of you? (1 for yes, 0 for no): ");
scanf("%d", &person);
printf("Enter the battery level (0-100): ");
scanf("%d", &battery);
if (obstacle == 1 && person == 1) {
    printf("Emergency Stop");
}
if (obstacle == 1 && person == 0) {
    printf("Change Direction");
}
if (obstacle == 0 && battery < 20) {
    printf("Return to Charging Station");
}
else if (obstacle == 0 && battery >= 20) {
    printf("Continue Moving Forward");
}
return 0;
}