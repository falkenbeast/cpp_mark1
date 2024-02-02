#include <iostream>
using namespace std;

int main() {
    double marks;
    char grade;

    cout << "Enter student's marks: ";
    cin >> marks;

    if (marks >= 85)
        grade = 'E';
    else if (marks >= 75)
        grade = 'O';
    else if (marks >= 65)
        grade = 'G';
    else if (marks >= 50)
        grade = 'S';
    else {
        cout << "Fail." << endl;
        if (marks >= 33)
            cout << "Resit in exam." << endl;
        else
            cout << "Redo course." << endl;
        return 0;
    }

    cout << "Pass. Grade: " << grade << endl;

    return 0;
}
