/*
* Pattern programs in C language: These programs print various patterns of numbers and stars. 
* These codes illustrate how to create various patterns using C programming. The C programs involve 
* usage of nested for loops (a for loop inside a for loop). A pattern of numbers, star or characters 
* is a way of arranging these in some logical manner or they may form a sequence. Some of these patterns are 
* triangles which have special importance in mathematics. Some patterns are symmetrical while others are not.
*     *
*    ***
*   *****
*  *******
* *********
* We have shown five rows above; in the program, you will be asked to enter the numbers of rows 
* you want to print in the pyramid of stars.
*/

#include <stdio.h>

int main()
{
    int number_of_rows, current_row, spaces, c, number_of_stars;

    printf("Enter the number of rows in pyramid of stars you wish to see\n");
    scanf("%d", &number_of_rows);

    spaces = number_of_rows;
    current_row = 1;
    number_of_stars = 1;
    while (current_row <= number_of_rows) // Loop to print rows
    {
        c = 1;
        while (c < spaces) // Loop to print spaces in a row
        {
            printf(" ");
            c++;
        }
        spaces--;
        c = 1;
        while (c <= number_of_stars) // Loop to print stars in a row
        {
            printf("*");
            c++;
        }
        number_of_stars = number_of_stars + 2;
        printf("\n");
        current_row++;
    }

    return 0;
}