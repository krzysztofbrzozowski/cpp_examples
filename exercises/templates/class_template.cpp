#include <iostream>
#include "class_template.h"

using namespace std;

int main() {
    Test<string> test{"Hello"};
    Test2<string> test2{"Hello2"};
}

