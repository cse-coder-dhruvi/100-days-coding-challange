//Check if a matrix is symmetric.

#include <stdio.h>
int main()
{
    int r, c, i, j;
    int symmetric = 1;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int matrix[r][c]; 
    printf("Enter elements of the matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++) 
    {
        for (j = i + 1; j < c; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) 
        break;
    }
    printf("%s\n", symmetric ? "true" : "false");
    return 0;
}
