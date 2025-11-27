//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
int main() 
{
    enum Operation { ADD = 1, SUBTRACT, MULTIPLY };
    enum Operation choice;
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\nChoose operation:\n");
    printf("1 - ADD\n");
    printf("2 - SUBTRACT\n");
    printf("3 - MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", (int*)&choice);
    switch (choice) 
    {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}
