// Student Management System
// Sarina_115518

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int roll;
    string course;

    cout << "Student Management System" << endl;
    cout << "-------------------------" << endl;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    cin.ignore();

    cout << "Enter course: ";
    getline(cin, course);

    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Course: " << course << endl;

    return 0;
}