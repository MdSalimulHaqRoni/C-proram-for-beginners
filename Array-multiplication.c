#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10], row1, row2, col1, col2, i, j, k, sum = 0;;
    printf("Enter rows and collums for first matrix : ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and collums for second matrix : ");
    scanf("%d %d", &row2, &col2);

    while (col1 != row2)
    {
        printf("Error !!\n");

        printf("Enter rows and collums for first matrix : ");
        scanf("%d %d", &row1, &col1);

        printf("Enter rows and collums for second matrix : ");
        scanf("%d %d", &row2, &col2);
    }
    //Taking input for the first matrix.
    printf("Enter Elements for First matrix.\n");
    for(i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("First[%d] [%d] = ", i, j);
            scanf("%d", &first[i] [j]);
        }
    }
    //Taking input for the second matrix.
    printf("Enter Elements for Second matrix.\n");
    for(i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Second[%d] [%d] = ", i, j);
            scanf("%d", &second[i] [j]);
        }
    }
    //Multiplying first matrix.
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                sum = sum + first [i] [k] * second [k] [j];
            }
            result [i] [j] = sum;
                sum = 0;
        }
    }
    //printing first matrix.
    printf("first matrix.\n");
    for(i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", first[i] [j]);
        }
        printf("\n");
    }
    //Printf Second Matrix.
    printf("printf second matrix.\n");
    for(i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", second[i] [j]);
        }
        printf("\n");
    }
    //Result matrix
      printf("printf Result matrix.\n");
    for(i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i] [j]);
        }
        printf("\n");
    }
}
