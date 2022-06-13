#include <iostream>
#include <vector>

using namespace std;
void display(vector <int> &vect);

void display(vector <int> &vect){
    cout << "Size: " << vect.size() << ", capacity: " << vect.capacity() << endl;
    cout << "Content of the vector: " << endl;
    for(int value:vect){
        cout << value << ", ";
    }
    cout << endl;
}

int main()
{
    vector <int> v1;
    vector <int> v2(5);

    display(v1);
    cout << endl;
    display(v2);

    vector <int> v4(6, -10);
    display(v4);
    cout << endl;

    int arr[] = {10,20,30,40,50};

    vector <int> v5(arr, arr+5);
    display(v5);
    cout << endl;

    vector <int> v6(v5);
    display(v6);
    cout << endl;

    // use iterator to print elements

    vector <int> v7(v6.begin(), v6.begin() + 3);
    display(v7);
    cout << endl;

    //Use reverse iterator to display last three elements

    vector <int> v8(v5.rbegin(), v5.rbegin() +3);
    display(v8);
    cout << endl;



    return 0;
}
