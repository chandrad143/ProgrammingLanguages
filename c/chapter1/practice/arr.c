#include <stdio.h>

/*program to get 5 numbers from user and display*/
int main()
{
    int i;
    int arr[5];
    int num;

    for (i = 0; i < 5; i++){
        printf("Please enter a number: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    for (i = 0; i < 5; i++)
        printf("this is the array at index %d: and the value is %d\n", i, arr[i]);
}