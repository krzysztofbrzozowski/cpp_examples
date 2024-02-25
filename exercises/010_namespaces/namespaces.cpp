#include <iostream>

using namespace std;

int x{11};

namespace abc {
    int x{47};

    void func() {
        cout << "abc x = " << x << endl;
        cout << "global x = " << ::x << endl; 
    }
}

int main() {
    abc::func();
}