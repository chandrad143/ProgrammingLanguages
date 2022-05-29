#include <iostream>

using namespace std;

int main()
{

    // Program to calculate tax
    double income, tax, yearly, monthly;
    cout << "Please enter your income: ";
    cin >> income;

    if (income<0){
        cout << "Invalid number entered";
        return 0;
    }
    else if (income >= 0 && income < 5000){
        tax= 0.0;
    }
    else if(income >= 5000 && income < 10000){
        tax = income *0.06;
    }
    else if(income >= 1000 && income < 20000){
        tax = income * 0.12;
    }
    else if(income >= 20000 && income < 50000){
        tax = income * 0.2;
    }
    else {
        tax = income * 0.3;
    }

    yearly = income-tax;
    monthly = yearly/12;


    cout << "Income tax is: " << tax << endl;
    cout << "Total Yearly salary is: " << yearly << endl;
    cout << "Total monthly salary is: " << monthly << endl;
    return 0;
}
