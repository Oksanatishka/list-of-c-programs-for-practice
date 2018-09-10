/*
 * C Program to Find the Sum of two Binary Numbers
 */

// Program Explanation
// 1. Take two binary numbers as input and store it in the variables binary1 and binary2.
// 2. Initialize the variables i and remainder to zero.
// 3. Obtain the remainders of both the binary numbers.
// 4. Obtain the quotients of both the binary numbers.
// 5. Firstly add the remainders of both binary numbers and further add the variable remainder.
// 6. Obtain the remainder of the result got at step 5 when divided by 2 and store it in the array sum[].
// 7. Obtain the quotient of the result got at step 5 when divided by 2 and override the variable remainder with this value.
// 8. Override the variables binary1 and binary2 with their quotient got at step 4.
// 9. Repeat the steps 3-8 with the new values of binary1 and binary2 until both becomes zero.
// 10. When it becomes zero check if any remainder exits. If it is, then copy it into the array sum.
// 11. Print the sum as output.

#include <stdio.h>

int main()
{

    long binary1, binary2;
    int i = 0, remainder = 0, sum[20];

    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}
