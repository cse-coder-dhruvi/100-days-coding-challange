//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() 
{
  int size, i, elem, pos;
  printf("Enter the number of sorted elements: ");
  scanf("%d", &size);
  int arr[size + 1]; 
  printf("Enter sorted elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to insert: ");
  scanf("%d", &elem);
  for (i = 0; i < size; i++) 
  {
    if (elem < arr[i]) 
    {
      break;
    }
  }
  pos = i;
  for (i = size; i > pos; i--) 
  {
    arr[i] = arr[i - 1];
  }
  arr[pos] = elem;
  size++;  
  printf("Array after insertion: \n");
  for (i = 0; i < size; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
