#include <iostream>

using namespace std;

int main()
{
    string name = "dileesh";

    name.push_back('.');

    cout << "After adding: " << name << endl;

    name.pop_back();
    cout << "After removing: " << name << endl;;

    name.front() = 'D';

    cout << "After changing front: " << name << endl    ;

    name.append(" chandra");
    cout << "After adding chandra: " << name << endl;

    name.insert(7, " (inserted)");
    cout << "After inserting at index: " << name;

    return 0;
}
