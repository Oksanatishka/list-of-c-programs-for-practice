/*
* This code prints prime numbers using C programming language.
* Prime number logic: a number is prime if it is divisible only by one and itself. 
* Remember two is the only even and the smallest prime number. 
* First few prime numbers are 2, 3, 5, 7, 11, 13, 17, .... 
* Prime numbers have many applications in computer science and mathematics. 
* A number greater than one can be factorized into prime numbers, for example, 540 = 22*33*51.
*/

#include <stdio.h>

int main()
{
    int number, i = 2;
    int is_not_prime_num = 0; // флаг чтобы выйти из цикла ниже (либо можно использовать return)

    printf("Enter a number ");
    scanf("%d", &number);

    while (is_not_prime_num == 0 && i <= number - 1)
    {
        if (number % i == 0)
        {
            printf("%d is not a prime number.\n", number);
            // return 0; // чтобы закончить программу сразу
            is_not_prime_num = 1;
        }
        i++;
    }
    if (i == number && is_not_prime_num == 0)
    {
        printf("%d is a prime number.\n", number);
    }
    return 0;
}
