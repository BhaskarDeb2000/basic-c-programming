#include <stdio.h>
#include "import.h"

int main()
{
    /*
    "\n" means new line
*/
    addNumber(5, 6);
    addNumber(39, 23);
    printName("Bhaskar", "Deb");
    char ch = 'j';      // single character
    printf("%c\n", ch); // Using %c to print a single character
    printf("%d\n", ch); // When %d is used, ASCII value(represents the character variable in numbers) is displayed

    char name[] = "orgho"; // name is declared as an array of characters (char name[]) to store the string "name".
    printf("%s\n", name);  // Using %s to print a string

    int solidNumber = -9;        // int means Integer, number should solid number, Int can be negative or positive
    printf("%d\n", solidNumber); // Using %d to print integar

    const int number = 5; // const means this number variable can't be change
    // number = 22;					// it will throw error because value is constant
    printf("%d\n", number);

    int changeVariable = 10;        // initial variable's value is 10
    changeVariable = 11;            // change the variable to 11
    printf("%d\n", changeVariable); // output is 11

    int numbers = 10;
    printf("\x1b[31mRed Size of numbers:\x1b[0m %zu bytes\n", sizeof(numbers)); //%zu format specifier is used to print the size of the variable numbers in bytes.
                                                                                // sizeof(numbers) returns the size of the variable numbers in bytes.

    /*
     Some fun fact ☺️: This is how you can print in color
    */

    printf("\x1b[31mOrgho \x1b[0m\n");       // Red text
    printf("\x1b[32mGreen text\x1b[0m\n");   // Green text
    printf("\x1b[33mYellow text\x1b[0m\n");  // Yellow text
    printf("\x1b[34mBlue text\x1b[0m\n");    // Blue text
    printf("\x1b[35mMagenta text\x1b[0m\n"); // Magenta text
    printf("\x1b[36mCyan text\x1b[0m\n");    // Cyan text

    /*
     This is how You can see some size of data types
    */
    short a;
    long b;
    long long c;
    long double d;
    int e = 5;
    float f;

    printf("size of short = %zu bytes\n", sizeof(a));
    printf("size of long = %zu bytes\n", sizeof(b));
    printf("size of long long = %zu bytes\n", sizeof(c));
    printf("size of long double= %zu bytes\n", sizeof(d));
    printf("size of int number= %zu bytes\n", sizeof(e));
    printf("size of float= %zu bytes\n", sizeof(f));

    /*
    float and double are used to hold real numbers.

    What's the difference between float and double?
    The size of float (single precision float data type) is 4 bytes. And the size of double (double precision float data type) is 8 bytes.
 */
    float number1 = 13.5;
    double number2 = 12.4283757675674743;

    printf("number1 = %f\n", number1); // Using %f to print float types. print 4 bytes data
    printf("number2 = %lf", number2);  // using %lf to print 8 bytes data

    /*
    scanf() is a function to take input from the user(you can see in terminal asking for "Enter an integer:"). The scanf() function reads formatted input from the standard input such as keyboards.
 */
    // Integer example
    int testInteger;
    printf("\nEnter an integer: ");       // promt in terminal
    scanf("\n%d", &testInteger);          // when add interger value this testInteger value store the data
    printf("Number = %d\n", testInteger); // testInteger variable print the stored data

    // Character example

    char userInput;
    printf("\nEnter a single character: "); // promt in terminal
    scanf("\n%c", &userInput);              // when add single character this userInput value store the data
    printf("Character = %c\n", userInput);  // userInput variable print the stored data, if user put multiple characters it will display only the first character. e.g: user put 'asjsgdgd' characters output will be 'a'

    // String example

    char stringInput[6];                  // Define array with enough space for a string of up to 5 characters plus the null terminator
    printf("\nEnter a string: ");         // Prompt in terminal
    scanf(" %s", stringInput);            // store string in stringInput Variable. Note: No need for '&' because stringInput is already an array (decays into a pointer)
    printf("String = %s\n", stringInput); // Print the character as a string

    // multiple values example

    char firstName[10];
    char lastName[10];
    int age;

    printf("Enter you FirstName LastName and age: "); // e.g. input Alak Dam 20

    scanf("%s %s %d", firstName, lastName, &age); // Note the usage of &age to get the address of the variable

    printf("\nMy name is %s %s and I am %d years old.\n", firstName, lastName, age);              // make this %s %s sperate. if you put it like this %s%s then output will AlakDam. if you put it like this %s %s then output will Alak Dam.
    printf("\x1b[31mMy name is %s %s and I am %d years old.\x1b[0m\n", firstName, lastName, age); // Print with color

    return 0;
}