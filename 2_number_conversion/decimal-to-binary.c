#include <stdio.h>

int main()
{
    int decimal, binary, rem, base;

    printf("Enter decimal number ");
    scanf("%d", &decimal);

    base = 1;
    binary = 0;
    while (decimal > 0)
    {
        rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + rem * base;
        base = base * 10;
    }

    printf("The binary number is %d.\n", binary);

    return 0;
}
