//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[1000], str2[1000], temp[2000];
    int i, len;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) 
    {
        printf("Not a rotation.\n");
        return 0;
    }
    len = strlen(str1);
    for (i = 0; i < len; i++) 
    {
        temp[i] = str1[i];
    }
    for (i = 0; i < len; i++) 
    {
        temp[len + i] = str1[i];
    }
    temp[2 * len] = '\0';
    if (strstr(temp, str2) != NULL) 
    {
        printf("Rotation\n");
    } 
    else 
    {
        printf("Not a rotation\n");
    }
    return 0;
}
