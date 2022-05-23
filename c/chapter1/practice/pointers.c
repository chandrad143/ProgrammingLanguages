#include <stdio.h>

int main()
{
    int x = 4;
    float y = 55.34;
    char z = 'a';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("this is p1: %d, p2: %0.2f, p3: %c\n\n", *p1, *p2, *p3);

    *p1 = 20;
    *p2 = 25.33;
    *p3 = '$';

    printf("this is changed p1: %d, p2: %0.2f, p3: %c\n\n", *p1, *p2, *p3);

    printf("this is thier addresses after changing pointers, x: %p, y: %p, z: %p\n\n", p1, p2, p3);
}