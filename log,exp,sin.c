#include<stdio.h>
int main()
{
    double x, result;
    printf("Enter Sin value: ");
    scanf("%lf", &x);

    result = sin(x);

    printf("Sin = %lf\n",result);
}
