#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

// Here need to pass by reference using & or this method will receive a copy instead of the actual list
void printEmployee(vector <Employee>& emplist){

    for (int i=0; i<emplist.size(); ++i){
        /*
        cout << "Employee Id: " << empList[i].id<<endl
            << "Employee Name: " << empList[i].name <<endl
            << "Salary: " << empList[i].salary <<endl;
        cout << "------------------------------"<<endl;
        */
        Employee e=emplist.at(i);
        cout << "Employee Id: " << e.id<<endl
            << "Employee Name: " << e.name <<endl
            << "Salary: " << e.salary <<endl;
        cout << "------------------------------"<<endl;
    }

}

int main()
{
    vector <Employee> empList;

    Employee e1={1,"Dileesh", 2000.22};
    Employee e2={2,"Naresh", 200.22};
    Employee e3={3,"Suresh", 20.22};
    Employee e4={4,"Mahesh", 2.22};

    empList.push_back(e1);
    empList.push_back(e2);
    empList.push_back(e3);
    empList.push_back(e4);

    printEmployee(empList);

    return 0;
}
