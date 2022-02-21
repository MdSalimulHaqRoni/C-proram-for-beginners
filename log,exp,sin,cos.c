#include<stdio.h>
int main()
{
    double x, result;
    printf("Enter cos value: ");
    scanf("%lf", &x);

    result = cos(x);

    printf("cos = %lf\n",result);
}

