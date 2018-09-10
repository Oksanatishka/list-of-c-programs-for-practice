/*
* This is a C Program which calculates the number of integers divisible by 5 in the given range.
*/

#include <stdio.h>

int main()
{
    int number, i, n, sum;

    printf("Enter a number ");
    scanf("%d", &number);

    i = 1;
    n = 0;
    sum = 0;
    while (i <= number)
    {
        if (i % 5 == 0)
        {
            n++;
            sum = sum + i;
        }
        i++;
    }
    printf("The number of integers is %d\n", n);
    printf("The sum of integers is %d\n", sum);

    return 0;
}
