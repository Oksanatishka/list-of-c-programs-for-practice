/*
* Consider the following triangle pattern
* *
* **
* ***
* ****
* *****
*/

#include <stdio.h>

int main()
{
    int number_of_stars, number_of_rows, current_row, i;

    printf("Enter number of rows ");
    scanf("%d", &number_of_rows);

    current_row = 1;
    number_of_stars = 1;
    while (current_row <= number_of_rows)
    {
        i = 1;
        while (i <= number_of_stars)
        {
            printf("*");
            i++;
        }
        number_of_stars++;
        printf("\n");
        current_row++;
    }
    return 0;
}
