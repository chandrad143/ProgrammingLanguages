#include <iostream>

using namespace std;

int main()
{
    //Program to check the age of user
    int age {};
    cout << "Please enter your Age: " ;
    cin >> age;

    if (age>10 && age < 18){
        cout << "You are not qualified!" << endl;
    }
    else if (age<10){
        cout << "What are you doing here!" << endl;
    }
    else{
        cout << "Welcome!!" << endl;
    }
    return 0;
}
