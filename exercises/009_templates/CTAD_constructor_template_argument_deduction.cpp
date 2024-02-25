#include <iostream>
#include <vector>

using namespace std;

int main() {
    /* Previous versions C++ declaration */
    // vectot<int> vec{1, 2, 3};
    /* Modern versions c++ declaration (deducted) */
    vector vec{1, 2, 3};

    for(auto it: vec) {
        cout << it << ", ";
    }
}