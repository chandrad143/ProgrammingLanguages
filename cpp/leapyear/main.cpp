#include <iostream>

using namespace std;

int main()
{
    // Program to check if the year is a leap year

    int year {};
    cout << "Enter the year you want to check: " ;
    cin >> year;


    if ((year %4 == 0 && year %100 != 0) || (year %400 == 0)){
        cout << "Entered year is a leap year" << endl;
    }
    else{
        cout << "Not a leap year!!";
    }

    /*

    if (year%4==0){
        if (year%100 == 0){
            if (year%400 == 0){
                cout << "Entered year is a leap year!!" << endl;
            }
            else{
                cout << "Not a leap year!";
            }

        }
        else{
            cout << "Entered year is a leap year!!" << endl;
        }
    }
    else{
            cout << "Not a leap year!!" ;

    }
    */
    return 0;
}
