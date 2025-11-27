//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
int main() 
{
    char str[1000];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Convert all uppercase letters to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    // Capitalize first letter of the string
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    // Capitalize letter after space
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}
