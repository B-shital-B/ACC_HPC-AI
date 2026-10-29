#include<iostream>
using namespace std;

class Engine
{
    string engineNo, engineType;
    float capacity;
    public:
    Engine()
    {
        cout << "Enter engine number: ";
        cin >> engineNo;
        cout << "Enter engine type: ";
        cin >> engineType;
        cout << "Enter engine capacity (in cc/litres): ";
        cin >> capacity;
    }
    void display()
    {
        cout << "Engine Number   : " << engineNo << endl;
        cout << "Engine Type     : " << engineType << endl;
        cout << "Engine Capacity : " << capacity << endl;
    }
};

class Vehicle{
    string vehicleName;
    string model;
    Engine engine;      // Engine class ka OBJECT — "Vehicle has-a Engine"

    public:
    Vehicle(){
        cout << "Enter vehicle name: ";
        cin >> vehicleName;
        cout << "Enter model: ";
        cin >> model;
        // engine ka constructor is se pehle hi chal chuka hoga (member object)
    }
    void display(){
        cout << "\n--- Vehicle Details ---" << endl;
        cout << "Vehicle Name : " << vehicleName << endl;
        cout << "Model        : " << model << endl;
        cout << "\n--- Engine Details ---" << endl;
        engine.display();
    }
};

int main(){
    Vehicle v;
    v.display();
    return 0;
}