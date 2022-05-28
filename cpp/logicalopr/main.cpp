#include <iostream>

using namespace std;

int main()
{
    int age=12;

    bool andop = age>=15 && age <=20;

    cout << "this is return of cond: " << andop << endl;

    // Or operation

    bool orop = age <=10 || age>=65;
    cout << "This is the return of or operation: " << orop << endl;

    // not operation

    bool notop = !(age<=10 && age >=60);
    cout << "This is the return of not operation: " << notop << endl;

    return 0;
}
