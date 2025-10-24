//Delete an element from an array.

#include <stdio.h>
int main() 
{
  int size, i, pos;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter index to delete: ", size - 1);
  scanf("%d", &pos);
  if (pos < 0 || pos >= size) 
  {
    printf("Invalid index!\n");
  } 
  else 
  {
    for (i = pos; i < size - 1; i++) 
    {
      arr[i] = arr[i + 1];
    }
    size--; 
    printf("Array after deletion: \n");
    for (i = 0; i < size; i++) 
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
  return 0;
}
