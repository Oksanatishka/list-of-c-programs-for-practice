/*
* This C language program performs the basic arithmetic operation of addition of two numbers 
* and then prints their sum on the screen. For example, if a user will input two numbers as; '5', '6' 
* then '11' (5 + 6) will be printed on the screen. In the expression (c = a + b) overflow may occur 
* if the sum of a and b is larger than the maximum value which can be stored in the variable c. 
* Similarly, you can write a C program which performs subtraction, multiplication, and division of two numbers.
*/

#include <stdio.h>

int main()
{
    int number1, number2, sum;
    /* sum = number1 + number2;     This row should go below!!! */

    printf("Enter the first number ");
    scanf("%d", &number1);
    printf("Enter the second number ");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("The sum of first and second numbers is %d\n", sum);
    return 0;
}