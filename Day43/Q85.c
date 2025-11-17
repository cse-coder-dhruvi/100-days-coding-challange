#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0, len = 0;
    printf("Enter the string: ");
    scanf("%s", str); 
    while (str[len] != '\0') 
    {
        len++;
    }
    for (i = 0; i < len / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("The reversed string: %s\n", str);
    return 0;
}
