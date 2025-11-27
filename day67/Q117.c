//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
int main() 
{
    int a[1000], b[1000], merged[2000];
    int m, n, i, j, k;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter sorted elements: ");
    for (j = 0; j < n; j++) 
    {
        scanf("%d", &b[j]);
    }
    i = j = k = 0;
    while (i < m && j < n) 
    {
        if (a[i] < b[j]) 
        {
            merged[k++] = a[i++];
        } 
        else 
        {
            merged[k++] = b[j++];
        }
    }
    while (i < m) 
    {
        merged[k++] = a[i++];
    }
    while (j < n) 
    {
        merged[k++] = b[j++];
    }
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
