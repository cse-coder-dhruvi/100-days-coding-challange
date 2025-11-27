//Take two structs as input and check if they are identical.

#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
int areIdentical(struct Student s1, struct Student s2) 
{
    int i;
    for (i = 0; i < 50; i++) 
    {
        if (s1.name[i] != s2.name[i]) 
        {
            return 0; 
        }
        if (s1.name[i] == '\0' && s2.name[i] == '\0') 
        {
            break;
        }
    }
    if (s1.roll_no == s2.roll_no && s1.marks == s2.marks) 
    {
        return 1;  
    }
    return 0;   
}
int main() 
{
    struct Student s1, s2;
    printf("Enter details for Student 1: \n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    printf("\nEnter details for Student 2: \n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);
    if (areIdentical(s1, s2)) 
    {
        printf("\nIdentical\n");
    }
    else 
    {
        printf("\nNot Identical\n");
    }
    return 0;
}
