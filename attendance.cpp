#include "attendance.h"

//add a new student
void AttendanceManager::addStudent(int roll, string name) {
    if (students.find(roll) != students.end()) {
        cout << "Student with roll number " << roll << " already exists.\n";
        return;
    }
    students[roll] = new Student(roll, name);
    cout << "Student added successfully.\n";
}

//mark a student as present
void AttendanceManager::markPresent(int roll) {
    if (students.find(roll) == students.end()) {
        cout << "Student not found.\n";
        return;
    }
    if (students[roll]->isPresent) {
        cout << "Attendance already marked.\n";
        return;
    }
    students[roll]->isPresent = true;
    undoStack.push(roll);
    cout << "Marked present.\n";
}

//undo the last attendance mark
void AttendanceManager::undoLastMark() {
    if (undoStack.empty()) {
        cout << "Nothing to undo.\n";
        return;
    }
    int lastRoll = undoStack.top();
    undoStack.pop();
    if (students.find(lastRoll) != students.end()) {
        students[lastRoll]->isPresent = false;
        cout << "Undo successful for roll " << lastRoll << ".\n";
    }
}

//display all students and their attendance
void AttendanceManager::displayAll() {
    if (students.empty()) {
        cout << "No students to display.\n";
        return;
    }

    cout << "\nAttendance List:\n";
    cout << "----------------------------\n";
    cout << "Roll\tName\t\tStatus\n";
    cout << "----------------------------\n";
    for (auto &pair : students) {
        cout << pair.second->rollNumber << "\t" 
             << pair.second->name << "\t\t" 
             << (pair.second->isPresent ? "Present" : "Absent") << "\n";
    }
}

//search for a student by roll number
void AttendanceManager::searchStudent(int roll) {
    if (students.find(roll) == students.end()) {
        cout << "Student not found.\n";
        return;
    }

    Student* s = students[roll];
    cout << "Roll Number: " << s->rollNumber << "\n";
    cout << "Name       : " << s->name << "\n";
    cout << "Status     : " << (s->isPresent ? "Present" : "Absent") << "\n";
}
