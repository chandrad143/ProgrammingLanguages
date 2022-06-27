#include <iostream>
#include <string>


using namespace std;

struct Student {
    int student_id;
    string name;
    double gpa;
};

int main()
{
    Student s1,s2,s3;

    s1.student_id = 1;
    s1.name ="John doe";
    s1.gpa = 9.95;

    s2.student_id = 2;
    s2.name ="Johnny Depp";
    s2.gpa = 8.95;

    cout << "ID: " << s1.student_id << ", "
        << "Name: " << s1.name<< ", "
        << "GPA: " << s1.gpa<< ", " << endl;

    return 0;
}
