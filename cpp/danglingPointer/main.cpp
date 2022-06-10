#include <iostream>
#include<ctime>
#include<cstdlib>


// Dynamic memory allocation

using namespace std;
int* getArray(int n);
int* copyArray(int* source, int n);
void display(int *a, int n);

int main()
{
    cout << "Input number of elements to process: " << endl;
    int n;
    cin >> n;

    int *arr = getArray(n);
    int *dest = copyArray(arr, n);
    display(arr,n);

    delete [] arr;

    display(dest, n);
    delete [] dest;
    cout << endl;
    return 0;
}

int* getArray(int n){
    int *p { new int[n]};
    time_t t= time(NULL);

    srand(t);

    for(int i=0; i<n; ++i){
        p[i]= rand() % 100;
    }

    return p;
}

int* copyArray(int *source, int n){
    int *dest {source};

    return dest;
}

void display(int *a, int n){
    cout << "Content of the array: " << endl;
    for(int i=0; i<n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}
