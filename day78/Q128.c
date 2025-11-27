//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;
    // Open file in read mode
    fp = fopen("text.txt", "r");
    if (fp == NULL) 
    {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    // Read character by character
    while ((ch = fgetc(fp)) != EOF) 
    {
        // Convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ch + 32;
        }
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
