#include <stdio.h>

int power(base, n)

int base, n;
{
    int i, p;

    for (i = 0; i <= n; ++i)
        p = p * base;
    return p;
}