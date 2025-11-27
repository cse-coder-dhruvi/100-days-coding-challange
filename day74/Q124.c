//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main() 
{
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    char text[1000], ch;
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);
    //Create and write to source file
    src = fopen(sourceFile, "w");
    if (src == NULL) 
    {
        printf("Error creating source file!\n");
        return 1;
    }
    printf("Enter text to save in %s:\n", sourceFile);
    getchar(); // clear newline from previous input
    fgets(text, sizeof(text), stdin);
    fputs(text, src);
    fclose(src);
    printf("Text saved to %s successfully!\n\n", sourceFile);
    // Step 3: Copy content to destination file
    src = fopen(sourceFile, "r");
    dest = fopen(destFile, "w");
    if (src == NULL || dest == NULL) 
    {
        printf("Error opening files for copying!\n");
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) 
    {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully to destination.txt");
    return 0;
}
