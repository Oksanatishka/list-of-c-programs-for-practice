#include <stdio.h>
#include <string.h>

int main()
{
    char string1[10], string2[10];
    int compareLimit = 100; // Initializing variable

    scanf("%s", &string1);
    scanf("%s", &string2);

    int result = strncmp(string1, string2, compareLimit);

    if (result > 0)
        printf("string1 > string2");
    else if (result < 0)
        printf("string2 > string1");
    else
        printf("string1 == string2");
}