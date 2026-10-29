#include<iostream>
using namespace std;

class Date
{
    int day, month, year;
    public:
    Date()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Employee{
    int eid;
    string ename;
    float salary;
    Date joiningDate;      // Date class ka OBJECT — "Employee has-a Date"

    public:
    Employee(){
        cout << "Enter employee id: ";
        cin >> eid;
        cout << "Enter employee name: ";
        cin >> ename;
        cout << "Enter salary: ";
        cin >> salary;
        // joiningDate ka constructor is se pehle hi chal chuka hoga (member object)
    }
    void display(){
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID   : " << eid << endl;
        cout << "Employee Name : " << ename << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Joining Date  : ";
        joiningDate.display();
    }
};

int main(){
    Employee e;
    e.display();
    return 0;
}