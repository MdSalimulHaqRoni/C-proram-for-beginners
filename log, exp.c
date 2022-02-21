#include<stdio.h>
int main()
{
    double x, result;
    printf("Enter Exp value: ");
    scanf("%lf", &x);

    result = expl(x);

    printf("Exp = %lf\n",result);
}

