#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;
    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter the Fahrenheit temperature:\n");
        scanf("%f", &temp);
        convertedTemp = (temp-32) / 1.8;
        printf("The temperature Celsius is: %f\n", convertedTemp);
        break;
    }

    case 2:
    {
        printf("Enter the Celsius temperature:\n");
        scanf("%f", &temp);
        convertedTemp = (1.8 * temp) + 32;
        printf("The temperature Fahrenheit is: %f\n", convertedTemp);
    }
        default:
        printf("Not a correct word");
    }
    return 0;
}
