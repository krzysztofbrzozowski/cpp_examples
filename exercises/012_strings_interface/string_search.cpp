#include <string>
#include <iostream>

using namespace std;

void regular_find(void) {
    string str{"Hello world"};

    size_t pos = str.find('o');

    if(pos != string::npos) {
        cout << R"(Fist occurence of 'o' is at index: )" << pos << endl;
    } else {
        cout << R"(Could not find 'o' in the sring)" << endl;
    }
}

void reverse_find(void) {
    string str{"Hello world"};

    size_t pos = str.rfind('o');

    if(pos != string::npos) {
        cout << R"(Fist occurence of 'o' is at index: )" << pos << endl;
    } else {
        cout << R"(Could not find 'o' in the sring)" << endl;
    }

    /* Search backwards from 5th element */
    pos = str.rfind('o', 5);

    if(pos != string::npos) {
        cout << R"(Fist occurence of 'o' is at index: )" << pos << endl;
    } else {
        cout << R"(Could not find 'o' in the sring)" << endl;
    }
}

int main() {
    regular_find();
    reverse_find();
}