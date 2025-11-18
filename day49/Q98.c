//Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main() 
{
    char str[1000];
    int i = 0, lastSpace = -1;
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ') 
    {
        printf("%c.", str[0]);
    }
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') 
        {
            lastSpace = i;
            printf("%c.", str[i + 1]);
        }
        i++;
    }
    if (lastSpace != -1) 
    {
        printf(" %s", &str[lastSpace + 1]);
    }
    return 0;
}
