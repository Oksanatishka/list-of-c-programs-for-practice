/*
* This program reverses the number entered by the user and then print it on the screen. 
* For example, if a user will enter 123 as input then 321 will be printed as output. 
*/

#include <stdio.h>

int main()
{
    int number, reversed = 0;

    printf("Enter a number ");
    scanf("%d", &number);

    while (number != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + number % 10;
        number = number / 10;
    }

    printf("The reversed number is %d.\n", reversed);
    return 0;
}