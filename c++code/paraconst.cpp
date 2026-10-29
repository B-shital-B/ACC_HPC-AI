#include<iostream>
using namespace std;

class Address
{
    string area, city;
    int pincode;
    public:
    Address()
    {
        cout << "Enter area: ";
        cin >> area;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter pincode: ";
        cin >> pincode;
    }
    void display()
    {
        cout << "Area: " << area << endl;
        cout << "City: " << city << endl;
        cout << "Pincode: " << pincode << endl;
    }
};

class employee{
    int eid;
    string ename;
    Address addr;      // Address class ka OBJECT — yehi hai "contains an object of Address"

    public:
    employee(){
        cout << "Enter id: ";
        cin >> eid;
        cout << "Enter name: ";
        cin >> ename;
        // addr ka constructor already chal chuka hoga is line se pehle
    }
    void display(){
        cout << "Employee id: " << eid << endl;
        cout << "Employee name: " << ename << endl;
        addr.display();
    }
};

int main(){
    employee e;
    cout<< "\n--- Employee Details ---" << endl;      
    e.display();
    return 0;
}