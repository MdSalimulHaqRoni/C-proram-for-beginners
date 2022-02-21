#include<stdio.h>
int main()
{
    int i, j, numberOfRows, numberOfCollums;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter number of rows & number collums: ");
    scanf("%d %d", &numberOfRows, &numberOfCollums);

    // Scanning A matrix.
    printf("Enter Elements for A matrix.\n");
    for(i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfCollums; j++)
        {
            printf("A[%d] [%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // Print A matrix.
    printf("A = ");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numberOfCollums; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    // Scanning B matrix.
    printf("\nEnter Elements for B matrix.\n");
    for(i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfCollums; j++)
        {
            printf("B[%d] [%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    // Print B matrix.
    printf("B = ");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numberOfCollums; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //Adding matrix
    for(i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfCollums; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // Print C matrix.
    printf("A + B = ");
    for(i = 0; i < numberOfRows; i++)
    {
        printf("\t");
        for (j = 0; j < numberOfCollums; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}

