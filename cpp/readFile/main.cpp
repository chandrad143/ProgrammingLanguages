#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main()
{
    ifstream fin;

    fin.open("test2.txt");
    if(!fin){
        cout << "Unable to open the file, ...";
        exit(1);
    }

    int val;
    int count =0;
    int sum=0;

    while(!fin.eof()){
        fin >> val;
        count++;
        sum+=val;
        cout << val << " ";
    }
    cout << endl << "Total number of elements in the file: " << count << endl;
    cout << "sum of all the values: " << sum;

    return 0;
}
