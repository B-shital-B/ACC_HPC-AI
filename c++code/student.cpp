#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numStudents, numSubjects;

    // 1. Accept number of students and subjects
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    // 2. Dynamically allocate memory for a 2D array (array of pointers)
    int** marks = new int*[numStudents];
    for (int i = 0; i < numStudents; i++) {
        marks[i] = new int[numSubjects];
    }

    // 3. Accept marks for each student in every subject
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter marks for Student " << i + 1 << ":\n";
        for (int j = 0; j < numSubjects; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // 4. Display marks in tabular format
    cout << "\n----- Marks Table -----\n";
    cout << setw(10) << "Student";
    for (int j = 0; j < numSubjects; j++) {
        cout << setw(10) << ("Sub" + to_string(j + 1));
    }
    cout << setw(10) << "Total" << setw(10) << "Average" << endl;

    // 5. Calculate and display total & average for each student
    int highestMark = marks[0][0];   // for step 6
    int highestStudent = 1, highestSubject = 1;

    for (int i = 0; i < numStudents; i++) {
        int total = 0;
        cout << setw(10) << ("S" + to_string(i + 1));

        for (int j = 0; j < numSubjects; j++) {
            cout << setw(10) << marks[i][j];
            total += marks[i][j];

            // Track highest mark among all students
            if (marks[i][j] > highestMark) {
                highestMark = marks[i][j];
                highestStudent = i + 1;
                highestSubject = j + 1;
            }
        }

        double average = static_cast<double>(total) / numSubjects;
        cout << setw(10) << total << setw(10) << fixed << setprecision(2) << average << endl;
    }

    // 6. Display highest mark among all students
    cout << "\nHighest mark obtained: " << highestMark
         << " (Student " << highestStudent << ", Subject " << highestSubject << ")" << endl;

    // 7. Deallocate all dynamically allocated memory
    for (int i = 0; i < numStudents; i++) {
        delete[] marks[i];
    }
    delete[] marks;

    return 0;
}