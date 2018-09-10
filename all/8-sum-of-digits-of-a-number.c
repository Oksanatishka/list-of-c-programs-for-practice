/*
* solution 1: using modulus operator (%) to extract individual digits of a number and keep on adding them.
* solution 2: using a character array (string) for storing an integer. We convert every character of the string 
* into an integer and add all these integers.
* solution 3: using recursion
*/

#include <stdio.h>

int main()
{
    int i, sum, char_to_int;
    char number[1000];

    i = 0;   // Initializing variable
    sum = 0; // Initializing variable

    printf("Enter a number to calculate its digits ");
    scanf("%s", number);

    while (number[i] != '\0') // While loop will execute till the condition is true
    {
        char_to_int = number[i] - '0'; /* Converting character to integer */
        sum = sum + char_to_int;
        i++;
    }
    printf("The sum of digits of a number %s is %d.\n", number, sum);
    return 0;
}