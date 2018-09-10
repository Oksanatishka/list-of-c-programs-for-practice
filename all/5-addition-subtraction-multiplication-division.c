#include <stdio.h>

int main()
{
    int number1, number2, sum, substraction, multiplication;
    float division;

    printf("Enter the 1st number ");
    scanf("%d", &number1);
    printf("Enter the 2nd number ");
    scanf("%d", &number2);

    sum = number1 + number2;
    substraction = number1 - number2;
    multiplication = number1 * number2;
    division = number1 / (float)number2;

    printf("The sum is %d \n", sum);
    printf("The substraction is %d \n", substraction);
    printf("The multiplication is %d \n", multiplication);
    printf("The division is %.2f \n", division);
}