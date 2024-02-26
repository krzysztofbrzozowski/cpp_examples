#include <string>
#include <iostream>

using namespace std;

string exclaim(const string &input) {

    string output {""};

    for(auto &c : input) {
        if(ispunct(c))
            output.insert(end(output), '!');
        else
            output.insert(end(output), c);
    }
    return output;
}

int main() {
    string test_tring {"Elo Elo, 320:"};
    cout << exclaim(test_tring) << endl;
}