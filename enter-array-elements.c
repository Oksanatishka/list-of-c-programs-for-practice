#include <stdio.h>

int main()
{
    int num_of_elem, i, array[1000];

    printf("Enter number of elements in array ");
    scanf("%d", &num_of_elem);

    printf("Enter each of %d elements\n", num_of_elem);

    i = 0;
    while (i < num_of_elem)
    {
        scanf("%d ", &array[i]);
        i++;
    }

    printf("The array elements are:\n");
    i = 0;
    while (i < num_of_elem)
    {
        printf("%d\n", array[i]);
        i++;
    }
    return 0;
}
