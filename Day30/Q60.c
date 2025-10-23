//Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() 
{
  int size, i;
  int pos = 0, neg = 0, zero = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements:\n", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
    if (arr[i] > 0)
    pos++;
    else if (arr[i] < 0)
    neg++;
    else
    zero++;
  }
  printf("Positive numbers count: %d\n", pos);
  printf("Negative numbers count: %d\n", neg);
  printf("Zero elements count: %d\n", zero);
  return 0;
}
