//Find the longest word in a sentence.

#include <stdio.h>
int main() 
{
    char str[1000], l[100];
    int i = 0, len = 0, maxlen = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            len++;
        } 
        else 
        {
            if (len > maxlen) 
            {
                maxlen = len;
                for (int j = 0; j < len; j++) 
                {
                    l[j] = str[i - len + j];
                }
                l[len] = '\0';  
            }
            len = 0;
        }
        i++;
    }
    if (len > maxlen) 
    {
        maxlen = len;
        for (int j = 0; j < len; j++) 
        {
            l[j] = str[i - len + j];
        }
        l[len] = '\0';
    }
    printf("Longest word: %s\n", l);
    return 0;
}
