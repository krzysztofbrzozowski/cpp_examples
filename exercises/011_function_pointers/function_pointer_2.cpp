#include <iostream>


void func1(const int a, const int b) {
    std::cout << a << ", " << b << std::endl;
}

/* Function pointer alais */
using pfunc = void (*)(const int, const int);

void some_func_using_func1(const int x, const int y, pfunc some_ptr) {
    (*some_ptr)(x, y);
}

pfunc func2_returing_pointer() {
    return &func1;
}

int main() {
    auto func2_ptr = func2_returing_pointer();

    some_func_using_func1(99, 112, func2_ptr);
}