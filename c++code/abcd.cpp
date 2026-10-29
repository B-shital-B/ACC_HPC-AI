#include <iostream>
#include <string>
using namespace std;
class employee {
private:
    int eid;
    string ename;
protected:
    double salary;
public:
    virtual void Accept() {
        cout << "Enter emp id, name, salary: ";
        cin >> eid >> ename >> salary;
    }
    virtual void display() {
        cout << "\nEmployee ID: " << eid;
        cout << "\nEmployee Name: " << ename;
        cout << "\nBase Salary: " << salary << endl;
    }
    virtual double calculatesal() = 0;
    virtual ~employee() {}
};
class manager : public employee {
private:
    double allowance;
public:
    void Accept() override {
        employee::Accept();
        cout << "Enter Allowance: ";
        cin >> allowance;
    }
    double calculatesal() override {
        return salary + allowance;
    }
    void display() override {
        employee::display();
        cout << "Total Salary : " << calculatesal() << endl;
    }
};
class developer : public employee {
private:
    double bonus;
public:
    void Accept() override {
        employee::Accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }


    double calculatesal() override {
        return salary + bonus;
    }


    void display() override {
        employee::display();
        cout << "Total Salary : " << calculatesal() << endl;
    }
};
class salesemp : public employee {
private:
    double salesAmount;
    double commRate;
public:
    void Accept() override {
        employee::Accept();
        cout << "Enter Sales Amount: ";
        cin >> salesAmount;
        cout << "Enter Commission Rate : ";
        cin >> commRate;
    }
    double calculatesal() override {
        return salary + (salesAmount * commRate);
    }
    void display() override {
        employee::display();
        cout << "Total Salary : " << calculatesal() << endl;
    }
};
int main() {
    employee* emp[10];
    int choice, count = 0;
    do {
        cout << "\nMenu:\n";
        cout << "1. Manager\n";
        cout << "2. Developer\n";
        cout << "3. Sales Employee\n";
        cout << "4. Display all employees and salaries\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1:
                emp[count] = new manager();
                emp[count]->Accept();
                count++;
                break;
            case 2:
                emp[count] = new developer();
                emp[count]->Accept();
                count++;
                break;
            case 3:
                emp[count] = new salesemp();
                emp[count]->Accept();
                count++;
                break;
            case 4:
                for (int i = 0; i < count; i++) {
                    emp[i]->display();
                }
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);




    for (int i = 0; i < count; i++) {
        delete emp[i];
    }


    return 0;
}