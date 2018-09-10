/*
* This is a C program to accept two integers and check if they are equal.
*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter 2 numbers ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
        printf("Numbers are equal.\n");
    else
        printf("Numbers are not equal.\n");

    return 0;
}
