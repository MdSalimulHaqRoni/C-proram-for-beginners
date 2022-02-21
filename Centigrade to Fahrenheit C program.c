//    F = (c * 1.8) + 32
#include<stdio.h>
int main()
{
    float c, F;
    printf("Enter centigrade: ");
    scanf("%f", &c);

    F = (c * 1.8) + 32;

    printf("Farn = %.2lf", F);

    return 0;
}
