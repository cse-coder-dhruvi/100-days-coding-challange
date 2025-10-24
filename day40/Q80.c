//Multiply two matrices.

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2)
    {
        printf("Matrix Multiplication not possible");
        return 0;
    }
    int matrix1[r1][c1], matrix2[r2][c2], prod[r1][c2]; 
    printf("Enter elements of the first matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nFirst Matrix: \n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of the second matrix: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nSecond Matrix: \n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            prod[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
            prod[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\nMatrix Multiplication: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
}
