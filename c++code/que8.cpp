#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numProducts, numMonths;

    cout << "Enter number of products: ";
    cin >> numProducts;
    cout << "Enter number of months: ";
    cin >> numMonths;

    
    int** sales = new int*[numProducts];
    for (int i = 0; i < numProducts; i++) {
        sales[i] = new int[numMonths];
    }

    
    for (int i = 0; i < numProducts; i++) {
        cout << "\nEnter sales for Product " << i + 1 << ":\n";
        for (int j = 0; j < numMonths; j++) {
            cout << "  Month " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }

    
    int* monthTotal = new int[numMonths];
    for (int j = 0; j < numMonths; j++) {
        monthTotal[j] = 0;
    }
 
    cout << "\n----- Sales Report -----\n";
    cout << setw(10) << "Product";
    for (int j = 0; j < numMonths; j++) {
        cout << setw(10) << ("M" + to_string(j + 1));
    }
    cout << setw(12) << "Total" << endl;

    long grandTotal = 0;

    for (int i = 0; i < numProducts; i++) {
        int productTotal = 0;
        cout << setw(10) << ("P" + to_string(i + 1));

        for (int j = 0; j < numMonths; j++) {
            cout << setw(10) << sales[i][j];
            productTotal += sales[i][j];
            monthTotal[j] += sales[i][j];
        }

        cout << setw(12) << productTotal << endl;
        grandTotal += productTotal;
    }

    
    cout << setw(10) << "Total";
    for (int j = 0; j < numMonths; j++) {
        cout << setw(10) << monthTotal[j];
    }
    cout << setw(12) << grandTotal << endl;

    
    cout << "\nGrand total of all sales: " << grandTotal << endl;

    
    for (int i = 0; i < numProducts; i++) {
        delete[] sales[i];
    }
    delete[] sales;
    delete[] monthTotal;

    return 0;
}