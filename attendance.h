#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include "student.h"
#include <bits/stdc++.h>
using namespace std;


class AttendanceManager {
    private:
        unordered_map<int, Student*> students; //rollnumber -> student pointer
        stack<int> undoStack; //to undo last marked attendance

    
    public:
        void addStudent(int roll, string name);
        void markPresent(int roll);
        void undoLastMark();
        void displayAll();
        void searchStudent(int roll);
};

#endif