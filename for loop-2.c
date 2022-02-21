#include<stdio.h>
int main()
{
    int i;

    for (i = 2; i <= 100; i = i + 2) // for (Initialization  ; Condition ; CounterUpdate)
        printf("%d\n", i);

    return 0;
}
