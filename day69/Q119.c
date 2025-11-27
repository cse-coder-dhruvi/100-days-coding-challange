//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int main() 
{
    int arr[1000], freq[10000] = {0};
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter integer elements(only one element will be repeated): ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) 
        {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;
        } 
        else 
        {
            freq[arr[i]] = 1;
        }
    }
    printf("No repeated element found.\n");
    return 0;
}
