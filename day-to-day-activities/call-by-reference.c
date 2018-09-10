/*
* Pass by Value means the called function’s parameter will be a copy of the caller’s passed argument.
* Pass by reference means the called function’s parameter will be the same as the caller’s passed argument. 
*/

/*
* Solution
* 1. Pass the addresses of the variables as parameters to the function.
* 2. In function definition receive the parameters through pointers.
* 3. Print the output and exit.
*/

/*
 * C Program to Illustrate Pass by Reference
 */
#include <stdio.h>

void cube(int *x);

int main()
{
    int num = 10;

    cube(&num);
    printf("the cube of the given number is %d", num);
    return 0;
}

void cube(int *x)
{
    *x = (*x) * (*x) * (*x);
}