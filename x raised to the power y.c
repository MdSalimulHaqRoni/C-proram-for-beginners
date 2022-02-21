#include<stdio.h>
int main()
{
    double x, y, result;

    printf("Enter value x & y:\n");
    scanf("%lf %lf", &x, &y);

    result = pow (x, y);

    printf("%.2lf ", result);
}
