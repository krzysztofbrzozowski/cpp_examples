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

void regular_find_first_of(void) {
    string str{"Hello world"};
    string vowels{"aeiou"};
    
    size_t pos = str.find_first_of(vowels);

    if(pos != string::npos) {
        cout << R"(Fist occurence one of 'a e i o u' is at index: )" << pos << endl;
    } else {
        cout << R"(Could not find 'a e i o u'  in the sring)" << endl;
    }
}


int main() {
    regular_find();
    reverse_find();
    regular_find_first_of();
}