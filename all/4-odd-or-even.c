/*
* As you have studied in Mathematics that in decimal number system even numbers are divisible by two 
* while odd numbers are not so we can use modulus operator(%) which returns remainder, 
* For example, 4%3 gives 1 (remainder when four is divided by three). 
* Even numbers are of the form 2*n, and odd numbers are of the form (2*n+1) where n is is an integer.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number ");
    scanf("%d", &number);

    number % 2 == 0 ? printf("The number %d is even.\n", number) : printf("The number %d is odd.\n", number);

    return 0;
}