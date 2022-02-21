#include<stdio.h>
int main()
{
    double x, result;
    printf("Enter log value: ");
    scanf("%lf", &x);

    result = log(x);

    printf("Log = %lf\n",result);
}
