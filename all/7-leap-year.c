/*
* A leap year (also known as an intercalary year or bissextile year) is a calendar year containing one additional day 
* (or, in the case of lunisolar calendars, a month) added to keep the calendar year synchronized with the astronomical 
* or seasonal year. (366 days)
* Год високосный, если он делится на четыре без остатка, но если он делится на 100 без остатка, это не високосный год. 
* Однако, если он делится без остатка на 400, это високосный год. 
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year to check if it is a leap year ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if (year % 100 == 0)
        printf("%d is NOT a leap year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is NOT a leap year.\n", year);

    return 0;
}