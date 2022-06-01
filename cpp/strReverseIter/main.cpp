#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="Dileesh chandra";

    string::reverse_iterator riter = name.rbegin();

    while (riter != name.rend()){
        cout << *riter << ", ";
    ++riter;
    }

    return 0;
}
