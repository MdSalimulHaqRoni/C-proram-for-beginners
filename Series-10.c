//1 + 4 + 7 + 10 + ....... +n
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i +3)
    {
        printf("%d ", i);
        sum = sum + i;
    }
     printf("\nSum = %d\n", sum);
}


