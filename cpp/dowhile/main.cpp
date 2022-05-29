#include <iostream>

using namespace std;

int main()
{
    int num;
    long sum;
    char response;

    do {
        cout <<"enter a number to add: " ;
        cin >> num;

        sum += num;
        cout << "Do you want to continue to add: Y/y to continue: ";
        cin >> response;
    } while (response == 'y' || response == 'Y');

    cout << "the entered sum is: " << sum << endl;
    return 0;
}
