#include <iostream>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

int main()
{
    /*
    Employee e;
    Employee* eptr=&e;

    eptr -> id = 5;
    eptr -> name= "John";
    e.salary=64466.33;

    cout << eptr->id << endl;
    cout << e.name<<endl;
    cout << eptr->salary << endl;
    */

    //dynamic allocation and access members using de referencing operator

    Employee *p = new Employee;

    p->id=5;
    p-> name= "John";
    p->salary=64466.33;

    cout << p->id << endl;
    cout << (*p).name <<endl;
    cout << (*p).salary << endl;

    return 0;
}
