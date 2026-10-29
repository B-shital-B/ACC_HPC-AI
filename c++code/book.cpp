#include<iostream>
using namespace std;

class Publisher
{
    string pname, city;
    long contactNo;
    public:
    Publisher()
    {
        cout << "Enter publisher name: "<<endl;
        cin >> pname;
        cout << "Enter city: "<<endl;
        cin >> city;
        cout << "Enter contact number: "<<endl;
        cin >> contactNo;
    }
    void display()
    {
        cout << "Publisher Name : " << pname << endl;
        cout << "City            : " << city << endl;
        cout << "Contact Number  : " << contactNo << endl;
    }
};

class Book{
    string title;
    string author;
    float price;
    Publisher pub;      // Publisher class ka OBJECT — "contains an object of Publisher"

    public:
    Book(){
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author name: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
        // pub ka constructor is se pehle hi chal chuka hoga (member object)
    }
    void display(){
        cout << "\n--- Book Details ---" << endl;
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
        cout << "Price   : " << price << endl;
        cout << "\n--- Publisher Details ---" << endl;
        pub.display();
    }
};

int main(){
    Book b;
    b.display();
    return 0;
}