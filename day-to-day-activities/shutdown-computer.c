/*
* This is a C program to shutdown or turn off the computer in linux.
*/

#include <stdio.h>

int main()
{
    system("shutdown -P now");
    return 0;
}