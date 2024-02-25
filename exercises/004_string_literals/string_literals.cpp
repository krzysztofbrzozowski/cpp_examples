#include <iostream>
#include <string>

using namespace std;
using namespace std::literals;

int main() {
    const char *cca = "Hello World";
    cout << "cca: " << cca << endl;

    string str = "Hello World"s;
    cout << "str: " << str << endl;

    cout << "std::string literal: " << "Hello"s + "World"s << endl;
}