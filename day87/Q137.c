//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
int main() 
{
    enum Role { ADMIN = 1, USER, GUEST };
    enum Role current;
    int choice;
    printf("Select your role:\n");
    printf("1 - ADMIN\n");
    printf("2 - USER\n");
    printf("3 - GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    current = (enum Role)choice;
    switch (current) 
    {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please register to gain more access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }
    return 0;
}
