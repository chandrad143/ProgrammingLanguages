#include <iostream>

using namespace std;

void printArray(int *pointer, int n){

    for(int i = 0; i < n ; ++i){
        cout << *(pointer+i) << " ";
    }
}


int main()
{
    int a[5] = {10,20,30,40,50};

    printArray(a, 5);

    return 0;
}
