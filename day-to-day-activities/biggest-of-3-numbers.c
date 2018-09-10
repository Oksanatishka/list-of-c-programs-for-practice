/*
* C program to find the biggest of three numbers
* Solution:
* 1. Take the three numbers and store it in the variables num1, num2 and num3 respectively.
* 2. Firstly check if the num1 is greater than num2.
* 3. If it is, then check if it is greater than num3.
* 4. If it is, then print the output as “num1 is the greatest among three”.
* 5. Otherwise print the ouput as “num3 is the greatest among three”.
* 6. If the num1 is not greater than num2, then check if num2 is greater than num3.
* 7. If it is, then print the output as “num2 is the greatest among three”.
* 8. Otherwise print the output as “num3 is the greatest among three”.
*/

#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}
