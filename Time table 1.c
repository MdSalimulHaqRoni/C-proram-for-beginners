#include<stdio.h>
int main()
{
    while (1) // if we continue the loop randomly
    {
        int num, i;
        printf("Enter any numbers: ");
        scanf("%d", &num);

        for(i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", num, i, num * i);
        }
    }

}
