#include<stdio.h>
int main()
{
    char upper;
    printf("Enter a uppercase value: ");
    scanf("%c", &upper);

    printf("The lowercase value is = %c\n", upper+32);
}
