#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str1="Hello World";

    cout << "Length of the string: " << str1.length() << endl;


    string newstr ("Hello there!");
    cout << "Length of the new: " << newstr.length() << endl;
    cout << newstr[1] << endl;

    string another (10, '@');
    cout << another << endl;

    return 0;
}
