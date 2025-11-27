//Use malloc() to allocate structure memory dynamically and print details.

#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
struct Node 
{
    struct Student s;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL;
    head = (struct Node*) malloc (sizeof(struct Node));
    if (head == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    printf("Enter student name: ");
    scanf("%s", &head->s.name);
    printf("Enter roll number: ");
    scanf("%d", &head->s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &head->s.marks);
    head -> next = NULL;
    printf("\nStudent Details: \n");
    printf("Name: %s\n", head->s.name);
    printf("Roll No.: %d\n", head->s.roll_no);
    printf("Marks: %.2f\n", head->s.marks);
    free(head);
    return 0;
}
