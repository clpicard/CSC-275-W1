#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    Student *next;
};

int main() {
  // Make the students
    Student* studentuno = new Student;
    Student* studentdos = new Student;
    Student* studenttres = new Student;

    // Give 'em some pizazz
    studentuno->id = 33;
    studentuno->name = "Alyssa";
    studentdos->id = 34;
    studentdos->name = "Caden";
    studenttres->id = 35;
    studenttres->name = "Gertrude";

    // Next in Line!
    studentuno->next = studentdos;
    studentdos->next = studenttres;
    studenttres->next = nullptr;  //last guy gets nada

    // 4. Print government specs --> pointing only
    Student* current = studentuno;
    while (current != nullptr) {
        cout << "Your Government Number: " << current->id << ", Your government name: " << current->name << endl;
        current = current->next;
    }



    return 0;
}
