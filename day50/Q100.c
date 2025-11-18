//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, j, k, first = 1;
    printf("Enter string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (i = 0; i < len; i++) 
    {
        for (j = i; j < len; j++) 
        {
            if (!first) printf(", ");
            first = 0;
            for (k = i; k <= j; k++) 
            {
                printf("%c", str[k]);
            }
        }
    }
return 0;
}
