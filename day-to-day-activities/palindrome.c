// 1. Take the number which you have to reverse as the input and store it in the variable num.
// 2. Copy the input number to the another variable temp.
// 3. Firstly initialize the variable reverse to zero.
// 4. Obtain the remainder of the input number.
// 5. Multiply the variable reverse with 10 and add the Obtained remainder to it and store the result in the same variable.
// 6. Obtain the quotient of the input number and considering this as input number repeat the steps as mentioned above until the obtained quotient becomes zero.
// 7. When it becomes zero, using if,else statement check whether the reversed number is equal to original number or not.
// 8. If it is equal, then print the output as “Number is a palindrome”, otherwise print the output as “Number is not a palindrome”.

#include <stdio.h>

void main()
{
    int num, temp, remainder, reverse = 0;

    printf("Enter an integer \n");
    scanf("%d", &num);
    /*  original number is stored at temp */
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}