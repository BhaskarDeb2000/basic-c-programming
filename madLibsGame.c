#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char color[20], plurals[20], name[20];
    printf("Enter Color:");
    scanf("%s", color);
    printf("Enter Plurals:");
    scanf("%s", plurals);
    printf("Enter Name:");
    fgets(name, 20, stdin);
    printf("\n\nRoses are %s\n", color);
    printf("\t%s are Blue\n", plurals);
    printf("\t\tI love %s\n", name);
    return 0;
}