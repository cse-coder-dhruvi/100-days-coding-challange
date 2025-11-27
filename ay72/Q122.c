//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char name[100], line[1000];
    int age;
    //Write to the file
    fp = fopen("info.txt", "w");
    if (fp == NULL) 
    {
        printf("Error creating file!\n");
        return 1;
    }
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);
    printf("Data successfully saved to info.txt\n\n");
    //Read from the file
    fp = fopen("info.txt", "r");
    if (fp == NULL) 
    {
        printf("Error reading file!\n");
        return 1;
    }
    printf("Reading contents of info.txt:\n");
    while (fgets(line, sizeof(line), fp) != NULL) 
    {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
