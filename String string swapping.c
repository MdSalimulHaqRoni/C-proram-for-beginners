#include<stdio.h>
int main()
{
    char str1[15] = "bangladesh";
    char str2[15] = "germany";
    char temp[15];
    printf("Before swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("After swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

}
