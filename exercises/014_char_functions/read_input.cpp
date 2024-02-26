#include <iostream>
#include <cctype>

using namespace std;

bool yes_or_no(const string &input) {
    char c = input[0];

    if('Y' == toupper(c))
        return true;
    return false;
}

int main() {
    string input;
    cout << "Put some input: Y or N\n";

    cin >> input;

    if(yes_or_no(input))
        cout << "YES" << endl;
    else
        cout << "NOPE" << endl;
}