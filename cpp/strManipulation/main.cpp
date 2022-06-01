#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Dileesh something chandra";

    //name.clear();

    /*
    if (name.empty()){
        cout << "This is an empty string";
    }
    else{
        cout << "This is not an empty string";
    }
    */

    // to remove something
    //name.erase(8,10);

    //cout << "Name after erasing: " << name ;

    // to remove dileesh

    name.erase(name.begin(), name.end()-17);

    cout << "After removing dileesh: " << name;

    return 0;
}
