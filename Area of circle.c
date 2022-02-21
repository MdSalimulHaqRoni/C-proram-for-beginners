//area = 3.1416 * radius * radios
#include<stdio.h>
int main()
{
    float radius, area;
    printf("Enter the value:\n");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    printf("Area of circle = %.2f\n", area);

    return 0;
}
