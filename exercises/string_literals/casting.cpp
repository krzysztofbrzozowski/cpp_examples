#include <iostream>
#include <string>

using namespace std;

void basic_casting(void) {
    int c = 'A';
    
    cout << c << endl;
    cout << (char)c << endl;

    /* C++ ~98 */
    cout << static_cast<char>(c) << endl;
}

/* Does not mutate str but not declared as const, if not given a const will raise an issue */
void print(char *str) {
    cout << str << endl;
}

int main() {
    basic_casting();

    /* example */
    const char *msg = "elo elo";
    /* 
        casting.cpp:17:6: note: candidate function not viable: 1st argument ('const char *') would lose const qualifier
        void print(char *str) {
            ^
        1 error generated.
    */
    // print(msg);
    print(const_cast<char *>(msg));
    print(as_const(msg));
}