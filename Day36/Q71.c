//Read and print a matrix.

#include <stdio.h>
int main() 
{
  int r, c, i, j;
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
    }
    printf("\n");
  }
  return 0;
}
