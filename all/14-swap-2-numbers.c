/*
* C program to swap two numbers with and without using third variable, using pointers, functions (Call by reference) 
* and using bitwise XOR operator. Swapping means interchanging. For example, if in your C program you have taken two 
* variables a and b where a = 4 and b = 5, then before swapping a = 4, b = 5 after swapping a = 5, b = 4. 
*In the first C program to swap numbers we will use a temporary variable to swap two numbers.
*/

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the first number(num1) ");
    scanf("%d", &num1);
    printf("Enter the second number(num2) ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d and num2 = %d.\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = num1;
    printf("After swapping: num1 = %d and num2 = %d.\n", num1, num2);
    return 0;
}