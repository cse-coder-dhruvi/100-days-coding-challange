//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
int norepeats(char str[], int start, int end) 
{
    for (int i = start; i < end; i++) 
    {
        for (int j = i + 1; j <= end; j++) 
        {
            if (str[i] == str[j]) 
            {
                return 0; 
            }
        }
    }
    return 1; // All characters are unique
}
int main() 
{
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);
    int maxLen = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            if (norepeats(s, i, j)) 
            {
                int len = j - i + 1;
                if (len > maxLen) 
                {
                    maxLen = len;
                }
            }
        }
    }
    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
