// 1 X 2 X 3 X 4 X ....... X N
#include<stdio.h>
int main()
{
    int n , i, result = 1;
    printf("Enter N : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("Result = %d", result);
}
