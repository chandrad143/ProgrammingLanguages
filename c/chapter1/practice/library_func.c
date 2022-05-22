#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double result;
    printf("enter the number whose sqrt you want to find: ");
    scanf("%d", &num);
    result = sqrt(num);
    printf("the sqrt of the number %d = %0.2f\n", num, result);
}