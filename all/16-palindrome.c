/*
* A palindrome number is a which remains the same on reversal. For example, some palindrome numbers are 
* 8, 121, 212, 12321, -454. To check whether a number is a palindrome or not first we reverse it and then 
* compare the number obtained with the original number, if both are same then the number is palindrome otherwise not. 
*
* To test if a number is palindrome or not, do the following steps:
* 1. Get the number from a user.
* 2. Reverse it.
* 3. Compare it with the number entered by the user.
* 4. If both are the same then print palindrome number else print not a palindrome number.
*/

#include <stdio.h>

int main()
{
    int number, reversed = 0, t;

    printf("Enter a number ");
    scanf("%d", &number);

    t = number; // чтобы в конце сравнить с изначальным значением number

    while (t != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + t % 10;
        t = t / 10;
    }

    if (number == reversed)
        printf("Palindrome numbers.\n");
    else
        printf("It's NOT palindrome numbers.\n");
    return 0;
}