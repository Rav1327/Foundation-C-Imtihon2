#include <stdio.h>

int main()
{
    int x = 15;
    int *x_pointer = &x;

    *x_pointer = 25;

    printf("Yangi qiymat: %d", *x_pointer);

}