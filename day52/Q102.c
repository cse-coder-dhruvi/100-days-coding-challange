//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>
int main() 
{
    int arr[1000], n, x, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) 
    {
        if (arr[i] >= x) 
        {
            printf("Index %d\n", i);
            if (i + 1 < n && arr[i + 1] == arr[i]) //To check if the next element is also the same ceil
            {
                printf("Multiple occurrences found. First occurrence index is printed.\n");
            }
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
