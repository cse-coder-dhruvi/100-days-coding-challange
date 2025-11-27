//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
enum Gender{MALE, FEMALE, INVALID};
struct Person
{
enum Gender gender;
};
int main() 
{
    struct Person p;
    char ch;
    printf("Enter Gender: ");
    scanf(" %c", &ch);  // Note the space before %c to ignore whitespace
    // Convert char to enum
    switch(ch) 
    {
        case 'M':
            p.gender = MALE;
            printf("Male\n");
            break;
        case 'F':
            p.gender = FEMALE;
            printf("Female\n");
            break;
        default:
            p.gender = INVALID;
            printf("Invalid Gender\n");
    }
    return 0;
}
