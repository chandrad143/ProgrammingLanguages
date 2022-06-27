#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v={10,20,30,40,50};

    int *p = v.data();

    *(p+2) = *(p+1) +100;

    for (int i=0; i<5; ++i){
        cout << p[i] << endl;
    }

    cout << "Content of the array from vector: " << endl;
    for(int k:v){
        cout << k << " " ;
    }
    return 0;
}
