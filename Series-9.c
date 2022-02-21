//1 + 3 + 5 + ....... +n
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i +2)
    {
        printf("%d ", i);
        sum = sum + i;
    }
     printf("\nSum = %d\n", sum);
}


