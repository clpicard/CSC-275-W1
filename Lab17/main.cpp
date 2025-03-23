#include <iostream>
#include "search_function.h" // don't forget this
using namespace std;

int main() {
    int arr[10] = {4, 67, 234, 24, 95, 45, 35, 59, 60, 294};
    double a[10] = {3.5, 34.6, 234.98, 4.6, 7.9, 2.3, 4.1, 5.6, 0.985, 4.009};
    string s[10] = {"Halil", "UM-flint", "third", "4th", "is", "are", "?", "88", "CSC275", "csep"};

    cout << "Index for 35 is: " << search(arr, 10, 35) << endl;
    cout << "Index for 234.98 is: " << search(a, 10, 234.98) << endl;
    cout << "Index for third is: " << search(s, 10, string("third")) << endl;




    Profile list[10]; // define Profile
    string names[10] = {"Adam", "Eve", "John", "Daniel", "Kate", "Sue", "Nicole", "Nick", "Chris", "Sam"}; // here are the names

    for (int i = 0; i < 10; i++) { // fill the array with the names.
        list[i].name = names[i];
    }


    Profile newProfile = {8, "Chris"}; //here I be
    cout << "Index of id 8 and name Chris " << search(list, 10, newProfile) << endl; //find me!

    Profile newProfileFail = {8, "Caden"}; //Just making sure it will fail
    cout << "Index of id 8 and name Caden " << search(list, 10, newProfileFail) << endl; //should return -1
    return 0;
}
