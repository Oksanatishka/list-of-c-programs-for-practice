/*
* Output: 0 1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;

    while (number <= 10)
    {
        printf("%d ", number); // Note the space after %d for gap in the numbers we want in output
        number++;
    }
    printf("\n");
    return 0;
}
