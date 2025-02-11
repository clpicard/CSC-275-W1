#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#define N 5

class Profile {
public:
    // Default constructor
    Profile() : fname("Caden"), lname("Picard"), age(38), id(0) {}

    // Parameterized constructor
    Profile(int sage, int sid, string fn, string ln) {
        age = sage;
        fname = fn;
        lname = ln;
        id = sid;
    }

    void setAge(int pp) { age = pp; }
    int getAge() { return age; }
    void setName(string fn, string ln) { fname = fn; lname = ln; }

    string getName() { return fname + " " + lname; }

    // Define operator >
    bool operator>(const Profile& other) const {
        return age > other.age;
    }

    // Define operator []
    int& operator[](int index) {
        return a[index];
    }

    void displayArray() {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    // Friend function for operator <<
    friend ostream& operator<<(ostream& var, Profile p);

private:
    string fname;
    string lname;
    int id, age;
    int a[N];
};

// Define operator <<
ostream& operator<<(ostream& var, Profile p) {
    var << p.getName() << " " << p.getAge();
    return var;
}


    int main()
    {
        // Define two Profile objects, ensuring p1 is older than p2
        Profile p1(55, 1, "Lia", "Mazer");
        Profile p2(30, 2, "Cornbread", "Eater");

        // Output profile information
        cout << "Array members for " << p1 << " are: " << endl;

        // Fill p1's array with random numbers from 1 through 6
        for (int i = 0; i < N; i++)
            p1[i] = 1 + rand() % 6;

        // Check if p1 is older than p2 and display its array
        if (p1 > p2)
            p1.displayArray();

        return 0;
    }




