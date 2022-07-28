// Write a program that uses a for loop to print the numbers 8, 11, 14, 17, 20,...,83, 86, 89.
#include <stdio.h>

int main()
{
    int i;
    for (i=8; i<92; i+=3)
    {
        printf("%d,", i);
    }
    return 0;
}
