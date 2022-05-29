#include <iostream>

using namespace std;

int main()
{
    int n ;
    long fact;
    cout << "Enter the number you want to check the factorial of: ";
    cin >> n;

    if (n<0){
        cout << "unable to find factorial for negatrive numner" << endl;
        return 0;
    }
    fact=1;
    while (n >= 1){
        fact = fact * n;
        --n;
    }
    cout << "this is the factorial: " << fact << endl;
    return 0;
}
