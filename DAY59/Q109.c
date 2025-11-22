//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int main() 
{
    int arr[1000], n, k, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements :");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an integer: ");
    scanf("%d", &k);
    int maxSum = 0;
    for (i = 0; i < k; i++) 
    {
        maxSum += arr[i]; 
    }
    int currentSum = maxSum;
    for (i = k; i < n; i++) 
    {
        currentSum = currentSum - arr[i - k] + arr[i]; 
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}
