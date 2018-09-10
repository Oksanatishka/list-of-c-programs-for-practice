/*
* This program adds n numbers which will be entered by a user. The user will enter a number indicating 
* how many numbers he/she wishes to add and then the user will enter n numbers. To perform the arithmetic 
* operation of addition of n numbers we can use an array or do it without using an array.
*/

#include <stdio.h>

int main()
{
    int n, sum = 0, i = 0, array[100];

    printf("Enter a general number of integers ");
    scanf("%d", &n);
    printf("Enter each integer\n");
    while (i < n)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}