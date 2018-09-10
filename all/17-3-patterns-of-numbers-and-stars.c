/*
* C pattern program of stars and alphabets:
*    *
*   *A*
*  *A*A*
* *A*A*A*
*/

#include <stdio.h>

int main()
{
    int number_of_stars, i, number_of_rows, current_row, spaces;

    printf("Enter number of rows ");
    scanf("%d", &number_of_rows);

    current_row = 1;
    number_of_stars = 1;
    spaces = number_of_rows;

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
            if (current_row > 1 && i < current_row)
                printf("A");
            i++;
        }
        number_of_stars++;
        current_row++;
        printf("\n");
    }
    return 0;
}
