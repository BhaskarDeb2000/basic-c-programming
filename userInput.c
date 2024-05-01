#include <stdio.h>
int main()
{
    int a;
    printf("Enter an Intger: ");
    scanf("%d", &a);
    printf("Your integer is: %d\n", a);
    float b;
    printf("Enter a Float Number: ");
    scanf("%f", &b);
    printf("Your float is: %f\n", b);
    double c;
    printf("Enter a Long Float: ");
    scanf("%lf", &c);
    printf("Your long float is: %lf\n", c);
    long long int d;
    printf("Enter a Long Integer: ");
    scanf("%lld", &d);
    printf("Your long integer is: %lld\n", d);
    char e;
    printf("Enter Single a Character: ");
    scanf("%c", &e);
    printf("Your Single character is: %c\n", e);
    char f[10];
    printf("Enter a Word: ");
    scanf("%s", f);
    printf("Your string is: %s\n", f);
    char g[100];
    printf("Enter your Sentence:");
    fgets(g, 100, stdin);
    printf("%s", g);
    return 0;
}