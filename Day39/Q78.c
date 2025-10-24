//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() 
{
    int s, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &s);
    int matrix[s][s];
    printf("Enter elements of the matrix: ");
    for (i = 0; i < s; i++) 
    {
        for (j = 0; j < s; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix: \n");
    for (i = 0; i < s; i++) 
    {
        for (j = 0; j < s; j++) 
        {
            printf("%d ", matrix[i][j]);
            if (i == j) 
            {
                sum += matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of main diagonal elements: %d", sum);
    return 0;
}
