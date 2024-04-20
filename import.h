#include <stdio.h>
int addNumber(int a, int b)
{
    int sum;
    sum = a + b;
    printf("Total %d\n", sum);
    return sum;
}
void printName(char firstName[2], char lastname[2])
{
    printf("My name is %s %s\n", firstName, lastname);
}

printf("hello world!");