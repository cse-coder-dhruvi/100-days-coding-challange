//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main() 
{
    char str[1000];
    int i = 0, start = 0, end;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n') 
        {
            end = i - 1;
            while (start < end) 
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        i++;
    }
    end = i - 1;
    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed words: %s", str);
    return 0;
}
