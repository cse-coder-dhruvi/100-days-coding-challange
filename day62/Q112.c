//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int main() 
{
    int arr[1000], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (currentSum < 0) 
        {
            currentSum = arr[i];
        }
        else 
        {
            currentSum += arr[i];
        }
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}
