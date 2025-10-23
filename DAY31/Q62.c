//Reverse an array without taking extra space.

#include <stdio.h>
int main() 
{
  int size, i;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < size / 2; i++) 
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
  printf("Reversed array: \n");
  for (i = 0; i < size; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
