#include <iostream>
#include <cmath>
using namespace std;




class Shape {
public:
    virtual void accept() = 0;          
    virtual void display() = 0;        
    virtual double calculateArea() = 0;
    virtual ~Shape() {}
};




class Circle : public Shape {
    double radius;
public:
    void accept() override {
        cout << "Enter radius of Circle: ";
        cin >> radius;
    }
    void display() override {
        cout << "Circle with radius = " << radius << endl;
    }
    double calculateArea() override {
        return M_PI * radius * radius;
    }
};




class Rectangle : public Shape {
    double length, breadth;
public:
    void accept() override {
        cout << "Enter length and breadth of Rectangle: ";
        cin >> length >> breadth;
    }
    void display() override {
        cout << "Rectangle with length = " << length
             << " and breadth = " << breadth << endl;
    }
    double calculateArea() override {
        return length * breadth;
    }
};




class Triangle : public Shape {
    double base, height;
public:
    void accept() override {
        cout << "Enter base and height of Triangle: ";
        cin >> base >> height;
    }
    void display() override {
        cout << "Triangle with base = " << base
             << " and height = " << height << endl;
    }
    double calculateArea() override {
        return 0.5 * base * height;
    }
};


int main() {
    Shape* shapes[10];
    int choice, count = 0;


    do {
        cout << "\nMenu:\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Display all shapes and areas\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


        switch(choice) {
            case 1:
                shapes[count] = new Circle();
                shapes[count]->accept();
                count++;
                break;
            case 2:
                shapes[count] = new Rectangle();
                shapes[count]->accept();
                count++;
                break;
            case 3:
                shapes[count] = new Triangle();
                shapes[count]->accept();
                count++;
                break;
            case 4:
                for (int i = 0; i < count; i++) {
                    shapes[i]->display();
                    cout << "Area = " << shapes[i]->calculateArea() << endl;
                }
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 5);


   
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
 
    return 0;
}
