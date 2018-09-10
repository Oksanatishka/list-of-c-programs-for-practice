/*
* This is a C program to find the sum of odd and even numbers from 1 to N.
*/

#include <stdio.h>

int main()
{
    int number, i, even_sum, odd_sum;

    printf("Enter a number ");
    scanf("%d", &number);

    i = 0;
    even_sum = 0;
    odd_sum = 0;

    while (i <= number)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;
        }
        else
        {
            odd_sum = odd_sum + i;
        }
        i++;
    }
    printf("Sum of even numbers %d\n", even_sum);
    printf("Sum of odd numbers %d\n", odd_sum);

    return 0;
}
