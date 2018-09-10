/*
* 1. Take a binary number and store it in the variable num.
* 2. Initialize the variable decimal_val to zero and variable base to 1.
* 3. Obtain the remainder and quotient of the binary number. Store the remainder in the variable rem and override the variable num with quotient.
* 4. Multiply rem with variable base. Increment the variable decimal_val with this new value.
* 5. Increment the variable base by 2.
* 6. Repeat the steps 3, 4 and 5 with the quotient obtained until quotient becomes zero.
* 7. Print the variable decimal_val as output.
*/

#include <stdio.h>

int main()
{
    int binary, decimal, rem, base;

    printf("Enter binary number ");
    scanf("%d", &binary);

    decimal = 0;
    base = 1;

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("The decimal is %d.\n", decimal);

    return 0;
}
