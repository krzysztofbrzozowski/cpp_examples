#include <iostream>

using namespace std;

void func(const int a, const int b) {
    cout << a << ", " << b << endl;
}

int main() {
    auto func_ptr = &func;
    func_ptr(1, 2);
    /* or */
    (*func_ptr)(1, 2);

    void (*func_ptr2)(const int, const int) = &func;
    func_ptr2(3, 4);
    /* or */
    (*func_ptr2)(3, 4);
}