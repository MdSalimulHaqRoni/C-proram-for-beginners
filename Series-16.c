// 1^3 X 3^3 X  5^2 X ....... X N^3
#include<stdio.h>
int main()
{
    int n , i, result = 1;
    printf("Enter N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        result = result * i*i*i;
    }
    printf("Result = %d", result);
}


