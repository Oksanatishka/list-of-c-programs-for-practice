#include <stdio.h>

int sum(int number);

int main()
{
    int number, result;

    printf("Enter a number ");
    scanf("%d", &number);

    result = sum(number);
    printf("The sum is %d.\n", result);

    return 0;
}

int sum(int number)
{
    if (number != 0)
        return (number % 10 + sum(number / 10));
    else
        return 0;
}