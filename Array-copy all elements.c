#include<stdio.h>
int main()
{
    int array1[30], array2[30],i, n;
    printf("Enter how many number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nArray1 : ");
    for(i = 0; i <n; i++)
    {
        printf("%d ", array1[i]);
    }
    //copy all the elements from array1 to array2.
    for(i = 0; i < n; i++)
    {
        array2[i] = array1[i];
    }
    printf("\narray2: " );

    for(i = 0; i <n; i++)
    {
        printf("%d ", array2[i]);
    }

}
