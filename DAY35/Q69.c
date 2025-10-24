//Find the second largest element in an array.

#include <stdio.h>
int main() 
{
  int size, i, pos;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  if (size < 2) 
  {
    printf("Array must have at least two elements.\n");
    return 1;
  }
  int arr[size];
  printf("Enter elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  int lar, seclar;
  if (arr[0] > arr[1]) 
  {
    lar = arr[0];
    seclar = arr[1];
  } 
  else 
  {
    lar = arr[1];
    seclar = arr[0];
  }
  for (i = 2; i < size; i++) 
  {
    if (arr[i] > lar) 
    {
      seclar = lar;
      lar = arr[i];
    } 
    else if (arr[i] > seclar && arr[i] != lar) 
    {
      seclar = arr[i];
    }
  }
  printf("Second largest element: %d\n", seclar);
  return 0;
}
