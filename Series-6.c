// 1 3 5 7 ........n
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i +2)
    {
        printf("%d\n", i);
    }
}
