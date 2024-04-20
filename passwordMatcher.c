#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    char confirmPassword[20];

    printf("Enter your Password here: ");
    scanf("%s", password); // Limiting input to 19 characters to prevent buffer overflow
    printf("Confirm Your Password here: ");
    scanf("%s", confirmPassword); // Limiting input to 19 characters to prevent buffer overflow

    if (strcmp(password, confirmPassword) == 0)
    {
        printf("Welcome!");
    }
    else
    {
        printf("Your Passwords do not match");
    }

    return 0;
}
