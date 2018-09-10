/*
* This program prints the number of arguments passed, and the arguments which are passed to it.
*
* Output:
* $ ./argc-argv 2 4
* Number of command line arguments passed: 3
* 1 argument is ./argc-argv
* 2 argument is 2
* 3 argument is 4
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    printf("Number of command line arguments passed: %d\n", argc);

    c = 0;
    while (c < argc)
    {
        printf("%d argument is %s\n", c + 1, argv[c]);
        c++;
    }

    return 0;
}
