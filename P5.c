#include <stdio.h>

int main()
{
    int role, status, security;

    printf("Enter User Role (1=Admin, 2=Researcher, 3=Student): ");
    scanf("%d", &role);

    printf("Enter Account Status (1=Active, 0=Inactive): ");
    scanf("%d", &status);

    printf("Enter Security Level: ");
    scanf("%d", &security);

    if (status == 0)
    {
        printf("Access Denied");
    }
    else
    {
        if (role == 1)
        {
            if (security >= 3)
                printf("Admin Access");
            else
                printf("Access Denied");
        }
        else if (role == 2)
        {
            if (security >= 2)
                printf("Researcher Access");
            else
                printf("Access Denied");
        }
        else if (role == 3)
        {
            if (security >= 1)
                printf("Student Access");
            else
                printf("Access Denied");
        }
        else
        {
            printf("Invalid User Role");
        }
    }

    return 0;
}

