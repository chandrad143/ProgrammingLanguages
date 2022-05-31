#include <iostream>

using namespace std;

int main()
{
    int temp = 300;
    cout << "Address of the variable temp is at: " << &temp << endl;

    int* p;
    p = &temp;

    cout << "Address of the pointer p: " << &p << endl;

    cout << "Value of variable temp before manipulation: " << temp << endl;
    *p = *p+1;

    cout << "value of variable after manipulating pointer p: " << temp << endl;

    cout << "Size of pointer p int is: " << sizeof(p) << endl;

    char *k;

    cout << "Size of pointer char k is: " << sizeof(*k) << endl;

    double *d;

    cout << "Size of pointer double d is: " << sizeof(*d) << endl;

    long longint = 2829382093203232;
    long *l;
    l = &longint;

    cout << "Size of pointer long l is: " << sizeof(*l) << endl;



    return 0;
}
