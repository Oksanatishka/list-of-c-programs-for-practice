#include <stdio.h>
#include <string.h>

struct person
{
    int age;
    int year;
    char color[20];
};

int main()
{
    struct person Oksana;

    Oksana.age = 25;
    Oksana.year = 1993;
    strcpy(Oksana.color, "blue");

    printf("Age %d\n", Oksana.age);
    printf("Year %d\n", Oksana.year);
    printf("Color %s\n", Oksana.color);

    return 0;
}
