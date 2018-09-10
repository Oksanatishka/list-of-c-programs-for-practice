/*
* This is a C program to read two integers & swap their values.
*/

#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
    int num1, num2;

    printf("Enter a value of num1 and num2 ");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);

    printf("The value of num1 is %d.\n", num1);
    printf("The value of num2 is %d.\n", num2);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}