/*
* C string length program: This program prints length of a string, for example, 
* length of the string "C programming" is 13 (space character is counted). 
* The null character isn't counted when calculating string length. 
* To find length of a string, we can use strlen function of "string.h."
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100] = "My name is Oksana.";
    int length;

    length = strlen(sentence);
    printf("%d\n", length);

    return 0;
}
