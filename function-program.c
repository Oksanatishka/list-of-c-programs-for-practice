#include <stdio.h>

void myFunction(); // Declaring a function

int main()
{
    printf("Main function.\n");

    myFunction(); // Calling the function

    printf("Back in function main.\n");

    return 0;
}

// Defining the function
void myFunction()
{
    printf("Welcome to my function. Feel at home.\n");
}