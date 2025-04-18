#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    map<string, string> presidentStates;

    // (a) Create a string pair with your name and state
    pair<string, string> myPair = make_pair("Caden Picard", "Michigan");

    string name, state, line;
    ifstream file("./presidentsWstates.txt");

    // (b) Fill your presidentStates from file
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, name, '\t');
            getline(ss, state, '\t');
            presidentStates[name] = state;
        }
        file.close();
    }
    else {
        cout << "Can't open the file!!!!." << endl;
    }

    // (c), (d) Print values with sorted keys
    cout << "President states (sorted by name):" << endl;
    for(auto it = presidentStates.begin(); it != presidentStates.end(); ++it)
        cout << setw(20) << left << it->first << " => " << it->second << endl;

    // (e) Print state for Thomas Jefferson
    auto tj = presidentStates.find("Thomas Jefferson");
    if (tj != presidentStates.end())
        cout << "Thomas Jefferson was from " << tj->second << endl;
    else
        cout << "Thomas Jefferson not found." << endl;

    // (f) Insert your name and state
    presidentStates.insert(myPair);

    // (g) Print values after inserting your name/state
    cout << "\nAfter inserting my name and state:" << endl;
    for(const auto& entry : presidentStates)
        cout << setw(20) << left << entry.first << " => " << entry.second << endl;

    // (h), (i), (j) Insert your pair again and use the return value
    pair<map<string,string>::iterator,bool> ret;
    ret = presidentStates.insert(myPair);
    if(ret.second == false){
        cout << "\nKey '" << myPair.first << "' already exists with state: " << ret.first->second << endl;
    } else {
        cout << "\nInserted successfully." << endl;
    }

    return 0;
}
