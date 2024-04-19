/* Part 1

#include - Calling out a library
stdio - standard input output
int main - integer main function
printf("") - output
return 0 - to run the program onces
*/

/* Part 2

escape sequences: They have to be inside the double quotes
\t - Creates tab Spaces between each output
 \n - New line
 \\ - Prints Backslashe
*/

/* Part 3
Variables - Allocated Space in memory to store a value
    Two Steps tp create - Declaration and initializtion
    int x - declaration
    x - Variable name
    x = 12; - initialization

    int x = 12; - declaration and initialization

    int - integer (int x = 10)
    float - floating point number (float y = 10.23)
    char - Single character (char grade - 'c')
    chat name[] = "Bhaskar" - Array of Characters
    string - string of characters ("Anything here is considered String")
    "% - format specifier
    %d - integer
    %f - float
    %c - character
    %s - string"

*/

#include <stdio.h>
int main()
{
    int age = 30;
    char greet[] = "Hello World!";
    char name[] = "Bhaskar Deb";
    float gpa = 2.90;
    char grade = 'C';
    printf("%s\n I am %s\nMy gpa is %.2f which grades as %c and I'm %d years old.", greet, name, gpa, grade, age);
    printf("\nI am orgho\n");
    printf("I really\tlike Pizza!\n");
    printf("This is a backslash \\ \n");
    printf("Hello World!");
    return 0;
}