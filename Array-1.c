#include<stdio.h>
int main()
{
    int a[100], i, n, sum = 0;
    printf("How many numbers you enter : ");
     scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is = %d\n", sum);
    printf("The avarage is = %.2f\n", (float)sum / n);

}
