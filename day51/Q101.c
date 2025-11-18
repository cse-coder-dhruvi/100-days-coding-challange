//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
int main() 
{
    int nums[1000], n, target;
    int i, first, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) //To find first occurence
    {
        if (nums[i] == target) 
        {
            first = i;
            break;
        }
    }
    if (i == n) 
    {
        printf("-1, -1\n");
        return 0;
    }
    for (i = n - 1; i >= 0; i--) //To find last occurrence
    {
        if (nums[i] == target) 
        {
            last = i;
            break;
        }
    }
    printf("First Occurrence: %d at index %d\n", target, first);
    printf("Last Occurrence: %d at index %d\n", target, last);
    return 0;
}
