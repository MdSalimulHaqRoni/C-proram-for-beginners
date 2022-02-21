#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a lowercase value: ");
    scanf("%c", &lower);

    upper = toupper(lower);
    printf("The uppercase value is = %c\n", upper);
}
