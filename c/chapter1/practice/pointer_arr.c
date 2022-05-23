#include <stdio.h>

/*accessing arrays unsing pointers*/
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p;

    p = a;

    printf("first element: %d\n", a[0]);
    printf("second element: %d\n", a[1]);
    printf("third element: %d\n", a[2]);

    printf("first element: %d\n", *p);
    printf("second element: %d\n", *(p + 1));
    printf("third element: %d\n", *(p + 2));
}