#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream fout;

    fout.open("c:/demo/testfile.txt");

    if(fout.fail()){
        cout << "Unable to open file, exiting ..."<<endl;
        exit(1);
    }

    fout << "Hello world" << endl;
    fout << "This is the second line" << endl;

    int a =0;
    double b=99.99;

    fout << "a = " << a << ", " << "b = " <<b <<endl;

    fout.close();

    return 0;
}
