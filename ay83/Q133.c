//Create an enum for months and print how many days each month has.

#include <stdio.h>
int main() 
{
    enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
    const char *monthNames[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = JANUARY; i <= DECEMBER; i++) 
    {
        printf("%s = %d days\n", monthNames[i], daysInMonth[i]);
    }

    return 0;
}
