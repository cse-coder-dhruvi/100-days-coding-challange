//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>
int main() 
{
    int arr[1000], n, k, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an integer: ");
    scanf("%d", &k);
    for (i = 0; i <= n - k; i++) 
    {
        for (j = i; j < i + k; j++) 
        {
            if (arr[j] < 0) 
            {
                printf("%d ", arr[j]);
                break;
            }
        }
        if (j == i + k) 
        {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}
