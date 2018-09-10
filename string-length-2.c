/*
* C program to find length of a string without using strlen function, recursion.
*/

#include <stdio.h>

int main()
{
    char sentence[100] = "My name is Oksana.";
    int i = 0;

    while (sentence[i] != '\0')
        i++;

    printf("%d\n", i);
    return 0;
}
