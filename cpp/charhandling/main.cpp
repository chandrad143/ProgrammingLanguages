#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    char caps;
    cout << "Ascci value of " << ch << " is " << (int)ch << endl;

    // Ascii manipulation

    caps = (int)ch - 32;
    cout << "this should return capital " << caps << endl;

    return 0;
}
