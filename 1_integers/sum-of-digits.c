/*
* This is a C program to compute the sum of digits in a given integer.
*/

#include <stdio.h>

int main()
{
    int number, remainder_, sum;

    printf("Enter a number ");
    scanf("%d", &number);

    sum = 0;

    while (number > 0)
    {
        remainder_ = number % 10;
        sum = sum + remainder_;
        number = number / 10;
    }
    printf("The sum of digits is %d\n", sum);

    return 0;
}
