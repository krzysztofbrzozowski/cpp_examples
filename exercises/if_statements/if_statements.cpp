#include <iostream>
#include <string>

using namespace std;

void verify_vector_not_empty(void) {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    auto it = begin(vec);
    if(it != end(vec)) {
        cout << "Vector not empty!";
    }

    /* Since C++ 17 it is allowed to do 
        This has advantage because local var stays in if scope */
    if(auto it_2 = begin(vec); it_2 != end(vec)) {
        cout << "Vector not empty 2!";
    } else {
        cout << "Vector empty!";
    }
}

int main() {
    verify_vector_not_empty();
}