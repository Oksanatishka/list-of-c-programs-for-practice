/*
* This code prints diamond pattern of stars. 
*   *
*  ***
* *****
*  ***
*   *
*/

#include <stdio.h>

int main()
{
    int number_of_rows, current_row, number_of_stars, spaces, i;

    printf("Enter a number of rows ");
    scanf("%d", &number_of_rows);

    spaces = number_of_rows;
    number_of_stars = 1;
    current_row = 1;

    while (current_row <= number_of_rows)
    {
        i = 1;
        while (i < spaces)
        {
            printf(" ");
            i++;
        }
        spaces--;
        i = 1;
        while (i <= number_of_stars)
        {
            printf("*");
            i++;
        }
        number_of_stars = number_of_stars + 2;
        current_row++;
        printf("\n");
    }
    spaces = 1;
    number_of_stars = number_of_stars - 4;
    current_row = 1;
    while (current_row <= number_of_rows)
    {
        i = 1;
        while (i <= spaces)
        {
            printf(" ");
            i++;
        }
        spaces++;
        i = 1;
        while (i <= number_of_stars)
        {
            printf("*");
            i++;
        }
        number_of_stars = number_of_stars - 2;
        current_row++;
        printf("\n");
    }

    return 0;
}
