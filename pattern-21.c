// For small letter use 96
#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter N : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        //print space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        //print number
        for (col = 1; col <= row; col++)
        {
            printf("%c", col + 64);
        }
        printf("\n");
    }

}



