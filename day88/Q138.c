//Print all enum names and integer values using a loop.

#include <stdio.h>
int main() 
{
    enum e{RED, YELLOW, GREEN};
    const char *eNames[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i <= GREEN; i++) 
    {
        printf("%s = %d\n", eNames[i], i);
    }
    return 0;
}
