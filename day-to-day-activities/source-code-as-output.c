/*
* This is a C Program to display its own source code as its output.
* Solution
* 1. Display the content from the same file you are writing the source code.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen(__FILE__, "r");
    do
    {
        ch = getc(fp);
        putchar(ch);
    } while (ch != EOF);
    fclose(fp);
    return 0;
}