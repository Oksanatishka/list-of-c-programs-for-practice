/*
* This C program asks for the user name & password and displays the same to illustrate user authentication.
*
* SOLUTION:
* 1. Take the user name & password as input.
* 2. Print the each character of password as * while receiving it.
* 3. Now print the original password and exit.
*/

#include <stdio.h>

void main()
{
    char password[10], username[10], ch;
    int i;

    printf("Enter User name: ");
    gets(username);
    printf("Enter the password < any 8 characters>: ");
    for (i = 0; i < 8; i++)
    {
        ch = getchar();
        password[i] = ch;
        ch = '*';
        printf("%c", ch);
    }
    password[i] = '\0';
    /*  Original password can be printed, if needed */
    printf("\n Your password is :");
    for (i = 0; i < 8; i++)
    {
        printf("%c", password[i]);
    }
}