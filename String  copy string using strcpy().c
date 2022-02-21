#include<stdio.h>
int main()
{
    char source[] = "Md Saimul Haq Roni";
    char target [20];

    strcpy(target, source);

    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);
}
