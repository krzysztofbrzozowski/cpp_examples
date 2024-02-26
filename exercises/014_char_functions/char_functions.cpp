#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str {"Hello world"};

    for(auto c : str) {
        if(isupper(c))
            cout << "Upper char " << c << endl;
        if(islower(c))
            cout << "Lower char " << c << endl;
        if(ispunct(c))
            cout << "Punctuation char " << c << endl;
        if(isspace(c))
            cout << "Space char " << "\'" << c << "\'" << endl;
    }
}