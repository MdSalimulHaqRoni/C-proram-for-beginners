// For use # or another symbol just change printf value
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

        for (row = n-1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

