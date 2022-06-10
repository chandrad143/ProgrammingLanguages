#include <iostream>
#include <iomanip>

using namespace std;
void display(int *p, int n){
    for (int i=0; i< n; ++i){
        cout << setw(4) << p[i];
    }
}

int main()
{
    int x[100];

    cout << "How many int elements you want to process: ";
    int n;
    cin >> n;

    int *p = new int[n];

    for (int i=0; i < n; ++i){
        cout << "Next int: ";
        cin >> *(p + i);
    }

    display(p,n);

    delete [] p;
    return 0;
}
