/*
* In our program user will input a character, and we will check whether it is an alphabet or not. 
* If it is an alphabet, then we check whether it is a vowel or a consonant. 
* This code checks whether an input alphabet is a vowel or not. Both lower-case and upper-case are checked.
*/

#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a character ");
    scanf("%c", &letter);

    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122)) /* OR ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) */
    {
        if (letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 ||
            letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117)
        /* OR if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U') */
        {
            printf("The letter %c is vowel.\n", letter);
        }
        else
        {
            printf("The letter %c is consonant.\n", letter);
        }
    }
    else
    {
        printf("It's neither a vowel nor a consonant.!\n");
    }
    /*  OR Check vowel using switch statement
    *    switch(ch)
    *    {
    *       case 'a':
    *       case 'A':
    *       case 'e':
    *       case 'E':
    *       case 'i':
    *       case 'I':
    *       case 'o':
    *       case 'O':
    *       case 'u':
    *       case 'U':
    *       printf("%c is a vowel.\n", ch);
    *       break;
    *       default:
    *       printf("%c isn't a vowel.\n", ch);
    *   }
    */

    return 0;
}