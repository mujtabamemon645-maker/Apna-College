# include <stdio.h>
# include <math.h>

int main() {
int a;
int b;
int c;
printf("Enter a:");
scanf("%d", &a);
printf("Enter b:");
scanf("%d", &b);
printf("Enter c:");
scanf("%d", &c);
if (a > b && a > c) {
    printf("a is the largest");
} else if (b > a && b > c) {
    printf("b is the largest");
} else if (c > a && c > b) {
    printf("c is the largest");
}
else {
    printf("There is a tie for the largest number");
}
return 0;
}
