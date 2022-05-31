#include <iostream>

using namespace std;

void fun(int* a, int* b);

void fun(int* val1, int* val2){
    *val1 = *val1+ 10;
    *val2 = *val2+ 20;
}

int main()
{
    int a,b;

    a = 10;
    b= 20;

    fun(&a , &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
