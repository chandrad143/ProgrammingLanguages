#include <iostream>
#include<vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    vector <int> v;

    ifstream fin;
    fin.open("data.txt");

    if(!fin){
        cout << "Unable to open the file"<< endl;
        exit(0);
    }

    //int i=0;
    while(!fin.eof()){
        int k;
        fin >>k;
        // v[i]k;
        // ++i;
        v.push_back(k);
    }
    fin.close();

    int total=0;
    for (int i = 0; i < v.size(); ++i ){
        cout << v[i] << ", ";
        total += v[i];
    }

    double avg = (double)total/ v.size();
    cout << endl;
    cout << "Here is the avergae: " << avg << endl;


    return 0;
}
