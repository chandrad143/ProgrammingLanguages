#include <iostream>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};


void inputEmployeeDetails(Employee *e, int size){
    for (int i=0; i<size; ++i){
        cout << "Enter the emp id: ";
        cin >> (e+i)->id;
        cout << "Enter the emp name: ";
        cin >> e[i].name;
        cout << "Enter the emp salary: ";
        cin >> e[i].salary;
    };
};

void printEmployeeDetails(Employee *e, int size){

    // Structure array elements can be accessed by array notation using dot notation index or memory location using arrow notation
    cout << "Here are the employee details: "<< endl
    << "------------------------------------" << endl;
    for (int i=0; i<size; ++i){
        cout << "Employee ID: " << (e+i)->id << endl;
        cout << "Employee name: " << e[i].name << endl;
        cout << "Employee Salay: " << e[i].salary << endl;
        cout << "-------------------------------------"<<endl;

}
};

int main()
{
    const int SIZE=5;

    Employee e[SIZE];

    inputEmployeeDetails(e,SIZE);

    printEmployeeDetails(e, SIZE);

    return 0;
}
