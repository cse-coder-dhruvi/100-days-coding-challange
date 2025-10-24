//Insert an element in an array at a given position.

#include <stdio.h>
int main() 
{
  int size, i, elem, pos;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  int arr[size + 1];  
  printf("Enter elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to insert: ");
  scanf("%d", &elem);
  printf("Enter the position to insert element: ", size + 1);
  scanf("%d", &pos);
  if (pos < 1 || pos > size + 1) 
  {
    printf("Invalid position!\n");
    return 1;
  }
  for (i = size; i >= pos; i--) 
  {
    arr[i] = arr[i - 1];
  }
  arr[pos - 1] = elem;
  size++;  
  printf("Array after insertion: \n");
  for (i = 0; i < size; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
