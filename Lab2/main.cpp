#include <iostream>
#include <string>

using namespace std;

// Define the structure Date
struct Date {
    int day, month, year;
};

// Define the structure Department
struct Department {
    string department_name;
    int department_ID;
};

// Define the structure Employee
struct Employee {
    string first_name;
    string last_name;
    Date dob;           // Date of birth
    Date start_date;    // Start date
    Department dept;    // Department information
};

int main() {

    Employee e1 = {
        "Mason",
        "Ware",
        {21, 6, 1935},
        {15, 1, 2024},
        {"Culinary", 122}
    };

    // Display Employee e1 details
    cout << "Employee e1 details:" << endl;
    cout << "Name: " << e1.first_name << " " << e1.last_name << endl;
    cout << "DOB: " << e1.dob.day << "/" << e1.dob.month << "/" << e1.dob.year << endl;
    cout << "Start Date: " << e1.start_date.day << "/" << e1.start_date.month << "/" << e1.start_date.year << endl;
    cout << "Department: " << e1.dept.department_name << " (ID: " << e1.dept.department_ID << ")" << endl;

    // Create Employee object e2 and fill its values from keyboard input
    Employee e2;
    cout << "\nEnter details for Employee e2:" << endl;

    cout << "First Name: ";
    cin >> e2.first_name;
    cout << "Last Name: ";
    cin >> e2.last_name;

    cout << "DOB (day month year): ";
    cin >> e2.dob.day >> e2.dob.month >> e2.dob.year;

    cout << "Start Date (day month year): ";
    cin >> e2.start_date.day >> e2.start_date.month >> e2.start_date.year;

    cout << "Department Name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, e2.dept.department_name);

    cout << "Department ID: ";
    cin >> e2.dept.department_ID;

    // Display Employee e2 details
    cout << "\nEmployee e2 details:" << endl;
    cout << "Name: " << e2.first_name << " " << e2.last_name << endl;
    cout << "DOB: " << e2.dob.day << "/" << e2.dob.month << "/" << e2.dob.year << endl;
    cout << "Start Date: " << e2.start_date.day << "/" << e2.start_date.month << "/" << e2.start_date.year << endl;
    cout << "Department: " << e2.dept.department_name << " (ID: " << e2.dept.department_ID << ")" << endl;

    return 0;
}
