#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = ("The quick brown fox jumps over the lazy dog over and over");
    string target = ("over");

    string::size_type index = str.find(target);

    while (index != string::npos){
        cout << "taget String '" << target << "' Found at index: " << index << endl;
        index = str.find(target, index+1);
    }


    return 0;
}
