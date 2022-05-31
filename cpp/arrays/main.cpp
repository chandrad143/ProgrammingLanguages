#include <iostream>

using namespace std;

int main()
{
    int arr[100], n;

    cout << "Please enter the range of the arr: ";
    cin >> n;

    while (n<=0 || n>= 100){
        cout << "Please enter between range 0-100" << endl;
        cin >> n;
    }

    for (int i =0; i < n; ++i){
        cout << "Enter the value for the arr at index: " << i << " ";
        cin >> arr[i];
    }
    cout << "Content of the arr: "<< endl;
    for (int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }

    cout << "Reverse of the arr: " << endl;

    for (int i = n-1; i>=0;--i){
        cout << arr[i] << " ";
    }

    // Print elements using pointers

    cout << endl << "These are printed using memory location" << endl;
    for (int i=0; i < n ; ++i){
        cout << *(arr+i) << " ";
    }

    return 0;
}
