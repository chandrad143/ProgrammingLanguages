#include <iostream>

using namespace std;


double paycalc(int hrs, double rate){
    double total = hrs * rate;
    if (hrs> 40){
        total = total + (hrs-40) *2;
    }
    return total;
}


int main()
{
    int hours;
    double payrate;
    cout << "enter hours: ";
    cin >> hours;
    cout << "enter pay rate: ";
    cin >> payrate;

    double pay = paycalc(hours, payrate);

    cout << "Your pay is: " << pay << endl;

    return 0;
}
