#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);
int sum(int a, int b, int c);

int sum(int a, int b){
    cout << "Integer sum" << endl;
    return a +b;
}

double sum(double a, double b){
    cout << "double sum" << endl;
    return a +b;
}

int sum(int a, int b, int c){
    cout << "3 sum" << endl;
    return a +b+c;
}

int main()
{
    cout << sum(2,3) << endl;
    cout << sum(2,3,5) << endl;
    cout << sum(2.6,3.8) << endl;

    return 0;
}
