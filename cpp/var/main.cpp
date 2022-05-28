#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int age{10};
    signed x;

    double interest_rate {0.07};

    cout <<"Age is: "<< age << endl;
    cout <<"Interest Rate is: " << interest_rate << endl;

    auto var = 9.5;
    auto Int = 0;

    cout << "Type of the variable var is: " << typeid(var).name() << endl;
    cout << "Type of the variable Int is: " << typeid(Int).name() << endl;
    cout << endl;

    //reference var

    int initial = 10;
    int &refnew = initial;

    cout << "This is the initial variable: " << initial << endl;

    refnew = refnew + 1;

    cout << "this is the value of reference var after modification: " << refnew << endl;
    cout << "This is the inital variable: " << initial << endl;

    return 0;
}
