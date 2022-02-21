#include<stdio.h>
int main()
{
    while (1) // if we continue the loop randomly
    {
        int i, n, fact = 1;
        printf("Enter any positive number:  ");
        scanf("%d", &n);

        for(i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("%d\n", fact);
    }
}
