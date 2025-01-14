#include <iostream>
using namespace std;

// Define the student record structure
struct Srecord {
    double q1, q2; // Quiz scores
    float midterm, final, average; // Exam scores and average
    char letter = 'A'; // Final letter grade initialized to 'A'
};

// Grading function
void fungrade(Srecord &student) {
    // Input validation for quiz 1
    do {
        cout << "Quiz 1 score (0-10)? ";
        cin >> student.q1;
        if (student.q1 < 0 || student.q1 > 10) {
            cout << "Invalid input. Please enter a value between 0 and 10.\n";
        }
    } while (student.q1 < 0 || student.q1 > 10);

    // Input validation for quiz 2
    do {
        cout << "Quiz 2 score (0-10)? ";
        cin >> student.q2;
        if (student.q2 < 0 || student.q2 > 10) {
            cout << "Invalid input. Please enter a value between 0 and 10.\n";
        }
    } while (student.q2 < 0 || student.q2 > 10);

    // Input validation for midterm
    do {
        cout << "Midterm score (0-100)? ";
        cin >> student.midterm;
        if (student.midterm < 0 || student.midterm > 100) {
            cout << "Invalid input. Please enter a value between 0 and 100.\n";
        }
    } while (student.midterm < 0 || student.midterm > 100);

    // Input validation for final exam
    do {
        cout << "Final exam score (0-100)? ";
        cin >> student.final;
        if (student.final < 0 || student.final > 100) {
            cout << "Invalid input. Please enter a value between 0 and 100.\n";
        }
    } while (student.final < 0 || student.final > 100);

    // Calculate average based on weights
    student.average = 0.50 * student.final +
                      0.25 * student.midterm +
                      0.25 * ((student.q1 / 10) * 100 + (student.q2 / 10) * 100) / 2;

    // Determine letter grade
    if (student.average >= 90) {
        student.letter = 'A';
    } else if (student.average >= 80) {
        student.letter = 'B';
    } else if (student.average >= 70) {
        student.letter = 'C';
    } else if (student.average >= 60) {
        student.letter = 'D';
    } else {
        student.letter = 'F';
    }
}

int main() {
    // Define array of 3 student records
    Srecord students[3];

    // Input and calculate grades for all students
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        fungrade(students[i]);
    }

    // Print all records
    cout << "\nStudent Records:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "  Quiz 1: " << students[i].q1 << "\n";
        cout << "  Quiz 2: " << students[i].q2 << "\n";
        cout << "  Midterm: " << students[i].midterm << "\n";
        cout << "  Final: " << students[i].final << "\n";
        cout << "  Average: " << students[i].average << "\n";
        cout << "  Letter Grade: " << students[i].letter << "\n";
    }

    return 0;
}
