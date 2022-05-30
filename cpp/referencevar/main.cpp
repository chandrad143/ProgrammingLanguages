#include <iostream>

using namespace std;

void mod(int &, int &);

int main()
{
    int x, y;

    x = 10;
    y = 20;

    cout << "Before calling the function " << endl << "X = " << x << " Y = " << y << endl;
    mod(x,y);
    cout << "After calling the function " << endl << "X = " << x << " Y = " << y << endl;

    return 0;
}

void mod(int &num1, int &num2){
    num1 += 5;
    num2 += 10;
}
