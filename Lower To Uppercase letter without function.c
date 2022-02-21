#include<stdio.h>
int main()
{
    char lower;
    printf("Enter lowercase value: ");
    scanf("%c", &lower);

    printf("The uppercase value is = %c\n", lower-32);
}
