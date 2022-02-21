#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("Num1 is large = %d\n", num1);
    else if (num1 < num2)
        printf("Num2 is large = %d\n", num2);
    else
        printf("Numbers are equal\n");

    return 0;
}
