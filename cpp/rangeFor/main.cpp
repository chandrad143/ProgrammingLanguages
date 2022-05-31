#include <iostream>

using namespace std;

const int size_of_array=5;

void printArr(int (&arr)[size_of_array]){
    for(auto ele:arr){
        cout << ele << " ";
    }
}


int main()
{
    int arr[] ={1,2,3,4,5};

    for (auto &ele:arr){
            ele *= 2;
    }
    printArr(arr);

    return 0;
}
