//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() 
{
  int r, c, i, j, sum = 0;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);
  int matrix[r][c];
  printf("Enter elements of the matrix: ");
  for (i = 0; i < r; i++) 
  {
    for (j = 0; j < c; j++) 
    {
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("The matrix: \n");
  for (i = 0; i < r; i++) 
  {
    for (j = 0; j < c; j++) 
    {
      printf("%d ", matrix[i][j]);
      sum += matrix[i][j];
    }
    printf("\n");
  }
  printf("Sum of all elements in the matrix: %d", sum);
  return 0;
}
