//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int main() 
{
    int nums[1000], n, i, j, c;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) 
    {
        c = 0;
        for (j = 0; j < n; j++) 
        {
            if (nums[j] == nums[i]) 
            {
                c++;
            }
        }
        if (c > n / 2) 
        {
            printf("Majority element: %d\n", nums[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
