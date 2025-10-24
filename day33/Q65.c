//Search in a sorted array using binary search.

#include <stdio.h>
int main() 
{
  int size, i, s;
  int low, high, mid, found = 0;
  printf("Enter the number of sorted elements: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter sorted elements: ", size);
  for (i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d", &s);
  low = 0;
  high = size - 1;
  while (low <= high) 
  {
    mid = (low + high) / 2;
    if (arr[mid] == s) 
    {
      found = 1;
      break;
    }
    else if (arr[mid] < s) 
    {
      low = mid + 1;
    } 
    else 
    {
      high = mid - 1;
    }
  }
  if (found)
  printf("%d found at Index %d\n", s, mid);
  else
  printf("-1");
  return 0;
}
