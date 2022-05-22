#include <stdio.h>

int main()
{
    int num, sum;
    sum = 0;

    do
    {
        printf("enter a positve number: ");
        scanf("%d", &num);
        if (num >= 0)
            sum = sum + num;
    } while (num >= 0);
    printf("sum of the numbers you entered is: %d\n", sum);
}