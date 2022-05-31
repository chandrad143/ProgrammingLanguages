#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Dileesh";

    string::iterator it = name.begin();

    while (it != name.end()){
        //cout << *it << ", ";

        if (*it >= 'a' && *it <= 'z'){
            *it -= 32;
        }
        ++it;
    }
    cout << name <<endl;
    return 0;
}
