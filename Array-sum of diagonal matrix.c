#include<stdio.h>
int main()
{
    int A[3] [3], i, j, sum;
    // Getting elements for the matrix.
    printf("Enter the elements for the matrix.\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d] [%d]", i, j);
            scanf("%d", &A[i] [j]);
        }
    }
    // print the matrix
    printf("Enter matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i] [j]);
        }
        printf("\n");
    }

    //Sum of diagonal elements.
    printf("Diaonal elements :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d ", A[i] [j]);
                sum = sum + A[i] [j];
            }
        }
    }
    printf("\nSum of Diagonal elements = %d\n", sum);
}
