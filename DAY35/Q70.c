//Rotate an array to the right by k positions.

#include <stdio.h>
int main() 
{
  int size, k, i;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter number of k positions to rotate right: ");
  scanf("%d", &k);
  k = k % size;
  for (i = 0; i < size / 2; i++) 
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
  for (i = 0; i < k / 2; i++) 
  {
    int temp = arr[i];
    arr[i] = arr[k - 1 - i];
    arr[k - 1 - i] = temp;
  }
  for (i = k; i < (size + k) / 2; i++) 
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - (i - k)];
    arr[size - 1 - (i - k)] = temp;
  }
  printf("Array after rotating right by k positions: \n", k);
  for (i = 0; i < size; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
