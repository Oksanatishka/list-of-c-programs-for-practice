/*
* Pass by Value means the called function’s parameter will be a copy of the caller’s passed argument.
* Pass by reference means the called function’s parameter will be the same as the caller’s passed argument. 
*/

/*
* Solution
* 1. Take two numbers as input.
* 2. Using a function, swap their values. You will notice that we are passing the values in the swap() function, hence the swapped values will NOT be reflected in main() function.
* 3. Print the output and exit.
*/

/*
 * C Program to Illustrate Pass by Value.
 */
#include <stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;

    printf("Before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping num1 = %d num2 = %d \n", num1, num2);
    return 0;
}