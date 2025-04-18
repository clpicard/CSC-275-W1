#include<iostream>
#include<set>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::set;

int main()
{
    set<string> setOfNames;
    // Initially insert four names
    setOfNames.insert("John");
    setOfNames.insert("Jane");
    setOfNames.insert("Nick");
    setOfNames.insert("Steve");

    string mynames[] = {"Adam", "Sue"};

    // (a) Insert values from mynames array into set
    setOfNames.insert(mynames, mynames + 2);

    // (b) Try inserting "Adam" again and report if exists
    auto ret = setOfNames.insert("Adam");
    if (ret.second == false)
        cout << "Adam is already part of the friend group" << endl;

    // (c) Use iterator to print current values
    cout << "Friend Group:" << endl;
    for(auto it = setOfNames.begin(); it != setOfNames.end(); ++it)
        cout << *it << endl;

    // (d) Search for element "Adam"
    auto it = setOfNames.find("Adam");
    if(it != setOfNames.end())
        cout << "'Adam' HERE" << endl;
    else
        cout << "'Adam' ain't here" << endl;

    // (e) Search for "adam" (lower case)
    it = setOfNames.find("adam");
    if(it != setOfNames.end())
        cout << "'adam' HERE" << endl;
    else
        cout << "'adam' ain't here" << endl;

    // (f) Erase "Adam" and print set contents
    setOfNames.erase("Adam");
    cout << "Friend group w/o 'Adam':" << endl;
    for(const auto &name : setOfNames)
        cout << name << endl;

    return 0;
}
