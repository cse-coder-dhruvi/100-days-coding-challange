#include <stdio.h>
int main() 
{
    char str[1000];
    int i = 0;
    int sp = 0, dig = 0, spec_ch = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            sp++;
        }
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            dig++;
        }
        else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)) 
        {
            spec_ch++;
        }
        i++;
    }
    printf("Spaces: %d\n", sp);
    printf("Digits: %d\n", dig);
    printf("Special characters: %d\n", spec_ch);

    return 0;
}
