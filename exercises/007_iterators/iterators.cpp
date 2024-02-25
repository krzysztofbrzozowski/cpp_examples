#include <iostream>

using namespace std;

/* Regular C approach */
void regular_c_approach_of_iterator(void) {
    const char str[] = {'H', 'e', 'l', 'l', 'o'};

    /* Pointer to end of the string */
    const char *pEnd = str + 5;
    /* Starto fo array */
    const char *p = str;

    while(p != pEnd) {
        cout << *p << ", ";
        ++p;
    }
}

void cpp_approach_of_iterator(void) {
    string str("Hello");

    /* Such a briliant way compairing to C */
    string::iterator it = str.begin();
    
    /* If str will be empty, *.end() and *.begin()  will have the same value, while loop will not start at all */
    while(it != str.end()) {
        cout << *it << ", ";
        ++it;
    }

    vector<int> vec{1, 2, 3, 4, 5, 6};
    vector<int>::iterator it_vect = vec.begin();

    while(it_vect != vec.end()) {
        cout << *it_vect << ", ";
        ++it_vect;
    }
}

int main() {
    // regular_c_approach_of_iterator();
    cpp_approach_of_iterator();
}