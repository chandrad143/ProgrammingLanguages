#include <iostream>
#include <string>

using namespace std;

struct Account{
    int accNo;
    string holderName;
    double balance;
};

Account readAccountData() {

  Account acc;
  cout << "Enter the accNo: ";
  cin >> acc.accNo;
  cout << "Enter name: ";
  cin >> acc.holderName;
  cout << "Enter starting balance: ";
  cin >> acc.balance;

  return  acc;

};

bool accountDebit(Account& acc, double amount){

    bool success = false;

    if (acc.balance >=amount){
        acc.balance-=amount;
        success=true;
    }
    return success;
};

void accountCredit(Account& acc, double amount){
    acc.balance += amount;
};

// here the value should be passed by refernce using & or this function recieves a copy of teh original object
void printAccountBalance(Account& acc) {

    cout << "Here is the account number: " << acc.accNo << endl;
    cout << "Here is the Name of the account: " << acc.holderName << endl;
    cout << "Here is the starting balance: " << acc.balance << endl;

};

int main()
{
    Account a;
    a= readAccountData();
    printAccountBalance(a);

    cout << "Enter the debit amount: ";
    double amount;
    cin >> amount;

    bool success = accountDebit(a, amount);

    if (success){
        cout << "Account succesfuly debit with amount of: $" << amount << endl;
        cout << "current balance: $" << a.balance << endl;
    }
    else{
        cout << "Insufficient amount";
    }

    return 0;
}
