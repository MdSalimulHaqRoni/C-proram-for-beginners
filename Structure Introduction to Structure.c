#include<stdio.h>
//Global structure
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person personal1, personal2;
    personal1.age = 27;
    personal1.salary = 12550.55;

    printf("Personal1 :\n");
    printf("Age = %d\n",personal1.age);
    printf("Salary = %.2lf\n", personal1.salary);
}
