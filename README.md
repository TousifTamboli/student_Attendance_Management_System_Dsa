# Student Attendance Management System (DSA-Based)

This is a **C++ console-based project** that simulates an **Attendance Management System** using **core Data Structures and Algorithms (DSA)**.

---

## Features

- Add student records
- Mark attendance
- Undo last attendance
- Display all student attendance
- Search for a student by roll number
- Uses **Hash Map**, **Stack**, and **basic DSA principles**

---

## Tech Stack

- C++
- Standard Template Library (STL)
  - `unordered_map`
  - `stack`

---

## Project Structure
```bash
student_Attendace_management_System_Dsa/
├── main.cpp # CLI entry point
├── attendance.cpp # AttendanceManager method definitions
├── attendance.h # AttendanceManager class header
├── student.h # Student struct
└── README.md # This file
```


---

## DSA Concepts Used

| Feature                    | DSA Used         |
|---------------------------|------------------|
| Add/Search students       | Hash Map         |
| Undo attendance           | Stack            |
| Display all attendance    | Iteration (Map)  |

---

## How to Run

### 1. Compile the code:
```bash
g++ main.cpp attendance.cpp -o attendance
```

### 2. Run the program:
```bash
./attendance.exe (for windows)
```

### Sample Output
==== Attendance Management System ====
1. Add Student
2. Mark Attendance
3. Undo Last Attendance
4. Display All Attendance
5. Search Student by Roll Number
6. Exit
Enter your choice: 1
Enter Roll Number: 101
Enter Name: John

Student added successfully.


### License
This Project is for educational purposes.
