//C= (F-32)/1.8
#include<stdio.h>
int main()
{
    float c, F;
    printf("Enter Farn: ");
    scanf("%f", &F);

    c = (F - 32) / 1.8;

    printf("Centigrade = %.2lf\n", c);

    return 0;
}
