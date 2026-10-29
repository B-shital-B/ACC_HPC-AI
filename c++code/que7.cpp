#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numStudents, numSubjects;

    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    if (numStudents <= 0 || numSubjects <= 0) {
        cout << "Invalid input." << endl;
        return 1;
    }

    int** marks = new int*[numStudents];
    for (int i = 0; i < numStudents; i++) {
        marks[i] = new int[numSubjects];
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter marks for Student " << i + 1 << ":\n";
        for (int j = 0; j < numSubjects; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\n----- Marks Table -----\n";
    cout << setw(10) << "Student";
    for (int j = 0; j < numSubjects; j++) {
        cout << setw(10) << (string("Sub") + to_string(j + 1));
    }
    cout << setw(10) << "Total" << setw(10) << "Average" << endl;

    int highestMark = marks[0][0];
    int highestStudent = 1, highestSubject = 1;

    for (int i = 0; i < numStudents; i++) {
        int total = 0;
        cout << setw(10) << (string("S") + to_string(i + 1));

        for (int j = 0; j < numSubjects; j++) {
            cout << setw(10) << marks[i][j];
            total += marks[i][j];

            if (marks[i][j] > highestMark) {
                highestMark = marks[i][j];
                highestStudent = i + 1;
                highestSubject = j + 1;
            }
        }

        double average = static_cast<double>(total) / numSubjects;
        cout << setw(10) << total << setw(10) << fixed << setprecision(2) << average << endl;
    }

    cout << "\nHighest mark obtained: " << highestMark
         << " (Student " << highestStudent << ", Subject " << highestSubject << ")" << endl;

    for (int i = 0; i < numStudents; i++) {
        delete[] marks[i];
    }
    delete[] marks;

    return 0;
}
