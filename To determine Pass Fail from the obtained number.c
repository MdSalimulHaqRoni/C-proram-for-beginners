#include<stdio.h>
int main()
{
    float marks;
    printf("Enter a marks: ");
    scanf("%f", &marks);

    if (marks >= 33)
        printf("You pass the exam");
    else
        printf("Sorry");

    return 0;
}
