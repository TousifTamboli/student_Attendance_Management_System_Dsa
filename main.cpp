#include "attendance.h"

int main() {
    AttendanceManager manager;
    int choice;

    while (true) {
        cout << "\n==== Attendance Management System ====\n";
        cout << "1. Add Student\n";
        cout << "2. Mark Attendance\n";
        cout << "3. Undo Last Attendance\n";
        cout << "4. Display All Attendance\n";
        cout << "5. Search Student by Roll Number\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Try again.\n";
            continue;
        }

        if (choice == 1) {
            int roll;
            string name;
            cout << "Enter Roll Number: ";
            cin >> roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            manager.addStudent(roll, name);
        }
        else if (choice == 2) {
            int roll;
            cout << "Enter Roll Number to mark present: ";
            cin >> roll;
            manager.markPresent(roll);
        }
        else if (choice == 3) {
            manager.undoLastMark();
        }
        else if (choice == 4) {
            manager.displayAll();
        }
        else if (choice == 5) {
            int roll;
            cout << "Enter Roll Number to search: ";
            cin >> roll;
            manager.searchStudent(roll);
        }
        else if (choice == 6) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
