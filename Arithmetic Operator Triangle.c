#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = (float) 1/2 * base * height; //Type casting
    printf("Area is : %.2f", area);

    return 0;
}
