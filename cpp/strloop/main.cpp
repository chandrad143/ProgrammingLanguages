#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";

    getline(cin, name);

    /*

    for (int i=0; i < name.length(); ++i){
        cout << name[i] << endl;
    }
    */

    for(auto &p:name){
        cout << p << ", ";
        if (p>='a' && p<='z'){
            p-=32;
        }
    }
    cout << "Name after conversion: " << name << endl;

    return 0;
}
