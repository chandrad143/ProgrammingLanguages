#include <iostream>

using namespace std;

int main()
{
    int n;

    int sum=0;

    cout << "Please enter a number: (0 to stop): ";
    cin >> n;

    while (n!=0){
        sum +=n;
        cout << "Please enter a number: (0 to stop): ";
        cin >> n;
    }
    cout << "The sum of numbers entered is: " << sum << endl;
    return 0;
}
