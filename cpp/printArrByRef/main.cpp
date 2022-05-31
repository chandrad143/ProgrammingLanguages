#include <iostream>

using namespace std;


void printArr(int (&p)[5]){
    cout << "Printing Arr by Ref: ";
    for (int i=0; i<5; ++i){
        cout << p[i] <<" ";
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    printArr(arr);
    return 0;
}
