#include <stdio.h>

/*2-d array example*/
int main()
{
    int i, j;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; // can contain max length of 10
    int sales[7][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18},
            {19, 20, 21}};

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            printf("sales for %s: is %d\n", days[i], sales[i][j]);
    }
}