#include <iostream>
#include <string>

using namespace std;

// Profile Class
class Profile {
private:
    string name, lastName;
    int age;

public:

    Profile() : name("NoName"), lastName("Dan"), age(3) {}

    Profile(string nombre, string lastNombre, int years)
        : name(nombre), lastName(lastNombre), age(years) {}

    // Get it done
    string getName() const { return name; }
    string getLastName() const { return lastName; }
    int getAge() const { return age; }

    // set it done
    void setName(string nombre) { name = nombre; }
    void setLastName(string lastNombre) { lastName = lastNombre; }
    void setAge(int years) { age = years; }

    // Display function
    void displayProfile() const {
        cout << "Nombre: " << name << " " << lastName << ", Cuantos Anos: " << age << endl;
    }
};

// Twitter Class
class Twitter {
private:
    Profile TwProfile;
    int NumFollowers;

public:

  // Twitter and set followers and profile
    Twitter(Profile profile) : TwProfile(profile), NumFollowers(0) {}

    // Getters
    Profile getProfile() const { return TwProfile; }
    int getNumFollowers() const { return NumFollowers; }

    // Setters
    void addFollowers() { NumFollowers++; }

    void ChangeProfile(string pname = "Donald", string lastname = "TrumpIsStupid", int page = -1) {
        TwProfile.setName(pname);
        TwProfile.setLastName(lastname);
        if (page != -1) {
            TwProfile.setAge(page);
        }
    }

    // Show me who you are
    void displayTwitterProfile() const {
        TwProfile.displayProfile();
        cout << "These are the number of followers: " << NumFollowers << endl;
    }
};

// Main function
int main() {

    //THE TESTS
    // #1
    Profile persona1("Trump Is", "Stupid", 99);

    // #2
    Twitter Account1(persona1);

    // #3
    for (int i = 0; i < 10; i++) {
        Account1.addFollowers();
    }

    // #4
    cout << "Old Name:" << endl;
    Account1.displayTwitterProfile();

    // #5
    Account1.ChangeProfile("Trump Still", "Stupid");

    // #6
    cout << "\nNew profile:" << endl;
    Account1.displayTwitterProfile();

    return 0;
}
