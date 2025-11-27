//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char filename[100];
    char newText[1000];
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    // Clear newline from previous input
    getchar();
    // Get new line of text
    printf("Enter the text to append: ");
    fgets(newText, sizeof(newText), stdin);
    // Append to file
    fputs(newText, fp);
    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}
