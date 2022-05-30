#include <iostream>

using namespace std;

int add(int, int b =2);

int add(int a, int b){
    return a+b;
}

int main()
{
    int a, b;

    int r = add(10);
    cout << r << endl;
    return 0;
}
