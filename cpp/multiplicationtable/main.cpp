#include <iostream>

using namespace std;

int main()
{
    int i, num;

    cout << "Enter the number you want to see the tabel for: ";
    cin >> num;

    for(i=1; i<=10; ++i){
        cout << num << " X " << i << " = " << num * i << endl;
    }
    return 0;
}
