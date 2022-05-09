#include <stdio.h>

double main()
{
    double nc;
    for (nc=0; getchar() != 0; ++nc)
        ;
    printf("%.0f\n", nc);
}