//1^1 + 2^2 + 3*3 + ...... + N^3
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i *i;
    }
    printf("Sum = %d", sum);
}
