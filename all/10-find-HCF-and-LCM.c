/*
* общий наибольший делитель
* HCF (the highest common factor) of two or more numbers is the greatest number which divides each of them exactly. 
* Example : HCF of 60 and 75 = 15 because 15 is the highest number which divides both 60 and 75 exactly.
* Aka, the greatest common divisor (GCD) or the greatest common factor (GCF).
* method 1: using prime factorization method
* method 2: by dividing the numbers
*
* наименьшее общее кратное
* LCM (the least common multiple) of two integers is the smallest integer that is a multiple of both numbers.
* For example, lcm(4, 6) = 12 and lcm(10, 15) = 30.
* method 1: factor both numbers into primes.
* method 2: lists the multiples of both numbers until the first common multiple is found.
*/

#include <stdio.h>

int main()
{
    int a, b, t, number1, number2, hcf, lcm;

    printf("Enter the first number\n");
    scanf("%d", &number1);
    printf("Enter the second number\n");
    scanf("%d", &number2);

    a = number1;
    b = number2;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (number1 * number2) / hcf;
    printf("HCF is %d.\n", hcf);
    printf("LCM is %d.\n", lcm);
    return 0;
}