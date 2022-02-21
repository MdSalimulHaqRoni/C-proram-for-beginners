#include<stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a uppercase value: ");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("The lowercase value is = %c\n", lower);
}

