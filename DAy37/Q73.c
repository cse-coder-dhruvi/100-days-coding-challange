//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() 
{
  int r, c, i, j;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);
  int matrix[r][c];
  int rowSum[r];
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
    rowSum[i] = 0;
    for (j = 0; j < c; j++) 
    {
      printf("%d ", matrix[i][j]);
      rowSum[i] += matrix[i][j];
    }
    printf("\n");
  }
  printf("Sum of each row: \n");
  for (i = 0; i < r; i++) 
  {
    printf("Row %d: %d\n", i + 1, rowSum[i]);
  }
  return 0;
}
