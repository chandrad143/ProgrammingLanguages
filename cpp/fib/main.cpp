#include <iostream>

using namespace std;

int main()
{
    int t1,t2,sum,num, i;

    cout << "enter the terms you want to print: ";
    cin >> num;

    for (t1 = -1, t2 = 1, i=0; i <= num ; ++i){
        sum = t1+t2;
        cout << sum << " ";
        t1=t2;
        t2=sum;
    }

    return 0;
}
