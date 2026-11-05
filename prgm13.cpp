#include <iostream>
using namespace std;

class InvalidMarks {
};

int main() {
    int marks[5];
    int total = 0;
    float average;

    cout << "Enter marks of 5 subjects: ";

    try {
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100) {
                throw InvalidMarks();
            }

            total += marks[i];
        }

        average = total / 5.0;

        cout << "Total = " << total << endl;
        cout << "Average = " << average << endl;

        if (average >= 80)
            cout << "Grade = A";
        else if (average >= 60)
            cout << "Grade = B";
        else if (average >= 40)
            cout << "Grade = C";
        else
            cout << "Grade = F";
    }
    catch (InvalidMarks e) {
        cout << "Exception: Marks must be between 0 and 100.";
    }

    return 0;
}