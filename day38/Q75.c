//Add two matrices.

#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c);
    int matrix1[r][c]; 
    printf("Enter elements of the first matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nFirst Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c);
    printf("Enter elements of the second matrix: \n");
    int matrix2[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nSecond Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    int sum[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nMatrix Addition: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
