#include <stdio.h>

int main()
{
    int c, count;

    count =0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++count;
    printf("%d\n", count);
    }
}