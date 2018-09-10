/*
* C program to print a string: it can be printed by using various functions such as printf, puts.
*/

#include <stdio.h>

int main()
{
    char sentance[100] = "My name is Oksana.";

    //printf("%s\n", sentance); // напечатает строку в одну строку

    int i = 0;
    while (sentance[i] != '\0')
    {
        printf("%c\n", sentance[i]); // напечатает каждый символ строки с новой строки
        i++;
    }
    return 0;
}
