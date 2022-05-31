#include <iostream>

using namespace std;

int main()
{
    int temp1 = 300, temp2 = 353;

    cout << "Address of temp1: " << &temp1 << endl;
    cout << "Address of temp2: " << &temp2 << endl;

    int *t2= &temp2;

    cout << "Address of t2: " << t2<< endl;

    t2 = t2+1;
    cout << "Address after changing the pointer: " << *t2<< endl;

    // Assign one type of pointer to another, but k only can contain one byte of info
    char *k = (char *)t2;

    cout << "Address of k: " << k<< endl;

    return 0;
}
