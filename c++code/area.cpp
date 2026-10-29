#include <iostream>
using namespace std;

class AreaCalculator
{
public:
    // Function to calculate area of a circle
    void Area(int r)
    {
        float area = 3.14 * r * r;
        cout << "Area of Circle = " << area << endl;
    }

    // Function to calculate area of a rectangle
    void Area(int length, int breadth)
    {
        int area = length * breadth;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    AreaCalculator obj;

    obj.Area(7);        
    obj.Area(10, 5);    

    return 0;
}