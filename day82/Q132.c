//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>
int main() 
{
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight current;
    char input[10];
    printf("Enter traffic light color: ");
    scanf("%s", input);
    if (strcmp(input, "RED") == 0) 
    {
        current = RED;
    } 
    else if (strcmp(input, "YELLOW") == 0) 
    {
        current = YELLOW;
    } 
    else if (strcmp(input, "GREEN") == 0) 
    {
        current = GREEN;
    } 
    else 
    {
        printf("Invalid input. Please enter RED, YELLOW, or GREEN.\n");
        return 1;
    }
    switch (current) 
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
