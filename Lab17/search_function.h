#ifndef search_function_h
#define search_function_h

#include <iostream>
using namespace std;

struct Profile {
    int id;
    string name;

    bool operator==(const Profile& thatguy) const {
        return name == thatguy.name;
    }
};
template <typename Teapot> // cause why not?
int search(const Teapot arr[], int n, const Teapot& key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Found the key, return index
        }
    }
    return -1; // Key not found
}

#endif
