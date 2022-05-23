#include <stdio.h>

int main()
{
    int x = 54;
    float y = 54.35;
    char z = 'r';

    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Address of z: %p\n", &z);
}