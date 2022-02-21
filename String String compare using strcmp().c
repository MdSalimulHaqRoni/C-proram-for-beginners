#include<stdio.h>
int main()
{
    char str1[]  = "My name is ";
    char str2 [] = "My name is ";

    int d = strcmp(str1, str2);

    if (d == 0)
    {
        printf("String are equal\n");
    }
    else
        printf("String are not equal\n");
}
