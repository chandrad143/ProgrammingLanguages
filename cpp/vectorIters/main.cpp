#include <iostream>
#include <vector>

using namespace std;
void display(vector <string> &v);

void display(vector <string> &v){
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    cout << "Content of the vector: " << endl;
    // iterator based loop

    for(vector<string>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;
}

int main()
{
    vector <string> names= {"Dil", "Sush", "john", "doe", "jane", "doe","zzzzz"};
    display(names);

    names.front()="AAA";
    display(names);

    names.back()="zzz";
    display(names);

    //erases an element, takes an iterator
    names.erase (names.begin());
    display(names);

    //erase last two elements
    names.erase(names.begin() + names.size()-2, names.end());
    display(names);

    //insert at index
    names.insert(names.end()-1, "WWW");
    display(names);

    //delete last elemet

    names.pop_back();


    return 0;
}
