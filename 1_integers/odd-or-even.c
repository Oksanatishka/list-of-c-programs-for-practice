#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number); // четный
    else
        printf("%d is odd.\n", number); // нечетный

    return 0;
}
