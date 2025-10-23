//Merge two arrays.

#include <stdio.h>
int main() 
{
  int size1, size2, i;
  printf("Enter size of first array: ");
  scanf("%d", &size1);
  int arr1[size1];
  printf("Enter %d elements for first array: ", size1);
  for (i = 0; i < size1; i++) 
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter size of second array: ");
  scanf("%d", &size2);
  int arr2[size2];
  printf("Enter %d elements for second array: ", size2);
  for (i = 0; i < size2; i++) 
  {
    scanf("%d", &arr2[i]);
  }
  int merged[size1 + size2];
  for (i = 0; i < size1; i++) 
  {
    merged[i] = arr1[i];
  }
  for (i = 0; i < size2; i++) 
  {
    merged[size1 + i] = arr2[i];
  }
  printf("Merged array: \n");
  for (i = 0; i < size1 + size2; i++) 
  {
    printf("%d ", merged[i]);
  }
  printf("\n");
  return 0;
}
