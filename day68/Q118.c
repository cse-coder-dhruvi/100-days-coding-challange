//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

#include <stdio.h>

int main() 
{
    int arr[1000], n, i, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter elements (from 0 to %d, except one): ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = (n * (n + 1)) / 2;
    int missing = total - sum;
    printf("Missing number is: %d\n", missing);
    return 0;
}
