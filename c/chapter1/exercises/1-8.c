#include <stdio.h>

// Program to count spaces, tabs and newlines

int main()
{
    int c, spaces, tabs, newlines;

    spaces = tabs = newlines =0;
    while ((c=getchar()) != EOF){
        if (c==' ')
        ++spaces;
        if (c=='\t')
            ++tabs;
        if (c=='\n')
            ++newlines;
        
    printf("%d spaces\n, %d tabs\n, %d newlines\n", spaces, tabs, newlines);
    }
}