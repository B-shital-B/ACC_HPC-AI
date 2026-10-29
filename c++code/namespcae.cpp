#include <iostream>
using namespace std;
namespace Math {
   
    int square(int n) {
        return n * n;
    }

   
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Square of " << number << " is " << Math::square(number) << endl;

    return 0;
}