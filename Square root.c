#include<stdio.h>
int main()
{
    double x, result;
    printf("Enter any squareroot: ");
    scanf("%lf", &x);

    result = sqrt (x);

    printf("result is: %.2lf", result);
}
