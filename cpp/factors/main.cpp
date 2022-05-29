#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,n;

    cout << "Enter a number to find factors of: ";
    cin >> n;

    cout << "Factors for the number are: 1 ";

    for (i=2; i < sqrt(n); ++i){
        if (n%i ==0){
            cout << i << " ";
            if ( n != n/i){
                cout << n/i << " ";
            }
        }
    }
    cout << n <<endl;

    return 0;
}
