/*
* Pattern:
*     1
*    232
*   34543
*  4567654
* 567898765
*/

#include <stdio.h>

int main()
{
    int number_of_rows, current_row, number_of_numbers, spaces, i, number, current_row_duplicate;

    printf("Enter number of rows ");
    scanf("%d", &number_of_rows);

    spaces = number_of_rows;
    current_row = 1;
    number = 1;
    number_of_numbers = 1;

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
        current_row_duplicate = current_row;
        while (current_row_duplicate <= number_of_numbers) // цикл от начала строки до середины
        {
            printf("%d", current_row_duplicate);
            current_row_duplicate++;
        }
        current_row_duplicate = current_row_duplicate - 2;
        while (current_row_duplicate >= current_row) // цикл от середины до конца строки
        {
            printf("%d", current_row_duplicate);
            current_row_duplicate--;
        }

        number_of_numbers = number_of_numbers + 2;

        current_row++;
        printf("\n");
    }

    return 0;
}
