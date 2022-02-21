#include<stdio.h>
int main()
{
    int A[3] [3], i, j, upperSum = 0, lowerSum = 0;
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

    //Sum of upper and lower triangle elements.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                printf("%d ", A[i] [j]);
                upperSum = upperSum + A[i] [j];
            }
            if (i > j)
            {
                printf("%d ", A[i] [j]);
                lowerSum = lowerSum + A[i] [j];
            }
        }
    }
    printf("\nSum of Upper triangle  elements = %d\n", upperSum);
    printf("\nSum of lower triangle  elements = %d\n", lowerSum);
}

