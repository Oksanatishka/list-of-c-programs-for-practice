/* Example: 5! = 5 * 4 * 3 * 2 * 1 = 120
* solution 1: using for loop (in my case, it's while loop).
* solution 2: using a function to find factorial.
* solution 3: using recursion. 
*/

#include <stdio.h>

int main()
{
    int i = 1, number, factorial = 1;

    printf("Enter a number:\n");
    scanf("%d", &number);

    while (i <= number)
    {
        factorial = factorial * i;
        i++;
    }

    printf("The factorial of the number is %d.\n", factorial);
    return 0;
}