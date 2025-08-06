#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student
{
    int rollNumber;
    string name;
    bool isPresent;

    Student(int r, string n)
    {
        rollNumber = r;
        name = n;
        isPresent = false;
    }
};

#endif
