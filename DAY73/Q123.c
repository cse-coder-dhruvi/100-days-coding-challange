//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main() 
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    //Create and write to file
    fp = fopen("info.txt", "w");
    if (fp == NULL) 
    {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fp, "\nHello World\nThis is C programming\n");
    fclose(fp);
    //Read and count
    fp = fopen("info.txt", "r");
    if (fp == NULL) 
    {
        printf("Error reading file!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) 
    {
        characters++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0) 
        {
            inWord = 1;
            words++;
        }
    }
    fclose(fp);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
