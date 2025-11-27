//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char name[100];
    int roll, marks, n;
    //Write student records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) 
    {
        printf("Error creating file!\n");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nStudent records saved to students.txt\n\n");
    //Read and display records
    fp = fopen("students.txt", "r");
    if (fp == NULL) 
    {
        printf("Error reading file!\n");
        return 1;
    }
    printf("Reading student records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) 
    {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
