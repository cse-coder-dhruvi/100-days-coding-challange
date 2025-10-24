//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() 
{
    int r, c, i, j, isDistinct = 1;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    int diagSize;
    if (r < c) 
    {
        diagSize = r;
    } 
    else 
    {
        diagSize = c;
    }

    int diag[diagSize];
    printf("Enter elements of the matrix: ");
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
    for (i = 0; i < diagSize; i++) 
    {
        diag[i] = matrix[i][i];
    }
    for (i = 0; i < diagSize; i++) 
    {
        for (j = i + 1; j < diagSize; j++) 
        {
            if (diag[i] == diag[j]) 
            {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct == 0) break;
    }
    printf("%s\n", isDistinct ? "true" : "false");
    return 0;
}
