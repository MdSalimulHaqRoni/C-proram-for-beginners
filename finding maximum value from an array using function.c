#include<stdio.h>
int maximum(int num[])
{
    int i;
    int max = num[0];
    for (i = 1; i < 5; i++)
    {
        if (max < num [i])
            max = num [i];
    }
    return max;
}
int main()
{
    int num [] = {10, 20, 30, 40, 50};
    int maximumValue = maximum (num);
    printf("Maximum = %d", maximumValue);
}
