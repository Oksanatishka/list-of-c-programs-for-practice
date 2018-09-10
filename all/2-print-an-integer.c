/*
* A user will input an integer, and it will be printed. 
* Input is done using scanf function and number is printed on the screen using printf. 
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer\n");
    scanf("%d", &number);                  // %d is used for an integer. Запись в число поэтому используем указатель
    printf("The integer is %d\n", number); // чтение числа
    return 0;
}