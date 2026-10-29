#include<iostream>
using namespace std;

class Contact
{
    long mobileNo;
    string email, city;
    public:
    Contact()
    {
        cout << "Enter mobile number: ";
        cin >> mobileNo;
        cout << "Enter email address: ";
        cin >> email;
        cout << "Enter city: ";
        cin >> city;
    }
    void display()
    {
        cout << "Mobile Number : " << mobileNo << endl;
        cout << "Email Address : " << email << endl;
        cout << "City          : " << city << endl;
    }
};

class Customer{
    int custId;
    string custName;
    Contact contact;      // Contact class ka OBJECT — "Composition using a Contact object"

    public:
    Customer(){
        cout << "Enter customer id: ";
        cin >> custId;
        cout << "Enter customer name: ";
        cin >> custName;
        // contact ka constructor is se pehle hi chal chuka hoga (member object)
    }
    void display(){
        cout << "\n--- Customer Details ---" << endl;
        cout << "Customer ID   : " << custId << endl;
        cout << "Customer Name : " << custName << endl;
        cout << "\n--- Contact Details ---" << endl;
        contact.display();
    }
};

int main(){
    Customer c;
    c.display();
    return 0;
}