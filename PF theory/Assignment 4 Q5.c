#include <stdio.h>

int main() {
    int role, status, security_level;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);
    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);
    printf("Enter security level: ");
    scanf("%d", &security_level);

    if (status == 0) {
        printf("Access Denied (Inactive account)\n");
    } else {
        int granted = 0;
        if (role == 1 && security_level >= 3) {
            granted = 1;
        } else if (role == 2 && security_level >= 2) {
            granted = 1;
        } else if (role == 3 && security_level >= 1) {
            granted = 1;
        }

        if (granted) {
            printf("Access Granted. Appropriate access level verified.\n");
        } else {
            printf("Access Denied\n");
        }
    }

    return 0;
}