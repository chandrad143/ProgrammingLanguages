#include <iostream>

using namespace std;

void reverseArray(int arr[], int n){
    cout << endl << "Printing in reverse: ";
    for (int i = n-1; i>=0; --i){
        cout << *(arr+i) << " ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << "This is the original Arr: ";
    for (int i=0; i<5;++i){
        cout << arr[i] << " ";
    }
    reverseArray(arr, 5);
    return 0;
}
