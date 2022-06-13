#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int first_last(vector <int> &vec);

// Print first and last ele of vector

int first_last(vector <int> &vect){

    if(vect.size()==0){
        cout << "No elements in vect";
        return(0);
    }

    cout << vect[0] << endl;
    int last= vect.size();
    cout << vect[last-1];
}

int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // shrink to fix to avoid excess capacity assignment

    v.shrink_to_fit();

    first_last(v);

    return 0;
}
