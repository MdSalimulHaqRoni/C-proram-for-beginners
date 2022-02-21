#include<stdio.h>
int main()
{
    int a= 32, b = 12, c;

    c = a & b;
    printf("a & b is = %d\n", c);

    c = a | b;
    printf("a | b is = %d\n", c);

    c = a ^ b;
    printf("a ^ b is = %d\n", c);

    return 0;
}
