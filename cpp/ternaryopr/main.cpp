#include <iostream>

using namespace std;

int main()
{
    // Program to use the ternary operator

    int a,b,c, result, maximum;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    // condition ? true : false

    result = (a>b)? a + b : a - b;

    cout << "result is: " << result << endl;

    // condition ? true : (condition ? true : false)

    maximum = (a>b && a>c)? a : ((b>c) ? b : c);

    cout << "Maximum is: " << maximum << endl;



    return 0;


}
