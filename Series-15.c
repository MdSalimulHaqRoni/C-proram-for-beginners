// 1^2 X 2^2 X 3^2 X 4^2 X ....... X N^2
#include<stdio.h>
int main()
{
    int n , i, result = 1;
    printf("Enter N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * i*i;
    }
    printf("Result = %d", result);
}

