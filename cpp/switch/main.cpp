#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // switch (condition(int, char)) cases
    switch (n){
    case 1: cout << "The value is One" << endl;
        break;
    case 2: cout << "The value is two" << endl;
        break;
    case 3: cout << "The value is three" << endl;
        break;
    default: cout <<"Invalid number" << endl;
        break;


    }
    return 0;
}
