//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
int main() 
{
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status current;
    int choice;
    printf("Select status:\n");
    printf("0 - SUCCESS\n");
    printf("1 - FAILURE\n");
    printf("2 - TIMEOUT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice < 0 || choice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1;
    }
    current = (enum Status)choice;
    switch (current) 
    {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }
    return 0;
}
