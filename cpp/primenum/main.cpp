#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter the value of number you want to check: ";
    cin >> n;

    bool flag = true;
    for (i=2; i <= sqrt(n); ++i){
            cout << "value of i: " <<i;
        if (n % i ==0){
            flag= false;
            break;
        }
    }
    if (flag==true){
        cout << "given num is a prime" << endl;
    }
    else{
        cout <<"Not a prime" << endl;
    }
    return 0;
}
