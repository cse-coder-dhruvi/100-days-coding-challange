//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() 
{
    int r, c, i, j, k;
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
    printf("Matrix: \n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal traversal: ");
    for (int sum = 0; sum <= r + c - 2; sum++) 
    {
        if (sum % 2 == 0) 
        {  
            for (i = sum; i >= 0; i--) 
            {
                j = sum - i;
                if (i < r && j < c) 
                {
                    printf("%d ", matrix[i][j]);
                }
            }
        } 
        else 
        {  
            for (i = 0; i <= sum; i++) 
            {
                j = sum - i;
                if (i < r && j < c) 
                {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
