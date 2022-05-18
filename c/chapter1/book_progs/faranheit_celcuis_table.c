#include <stdio.h>

/* Program to print the farenheight and celcius temperature table
FAHR = 0,20, 40.
*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* Is the lower limit of temperature table*/
    upper = 300; /* Upper limit*/
    step = 20; /* step size*/

    fahr = lower;
    while (fahr<=upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr+step;
    }   
}