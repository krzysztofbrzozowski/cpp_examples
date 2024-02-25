#include <iostream>
#include <string>

using namespace std;

/* Basic arithmetic iterator */
void arithmetic_iterator(void) {
    string str("Hello");

    cout << "Num of elements: " << str.end() - str.begin() << endl;

    auto second = begin(str) + 1;
    cout << "Second char in str: " << *second << endl;

    auto last = end(str) - 1;
    cout << "Last char in str: " <<  *last << endl;

    auto mid = begin(str) + (end(str) - begin(str)) / 2;
    cout << "Mid element: " << *mid << endl;
}

void arithmetic_iterator_next_prev(void) {
    string str("Hello");

    cout << "Num of elements: " << str.end() - str.begin() << endl;
    /* Instead of begin(str) + 1 */
    auto second = next(begin(str));
    cout << "Second char in str: " << *second << endl;
    
    /* Instead of begin(str) - 1 */
    auto last = prev(end(str));
    cout << "Last char in str: " <<  *last << endl;

    auto mid = begin(str) + (end(str) - begin(str)) / 2;
    cout << "Mid element: " << *mid << endl;
}


int main() {
    arithmetic_iterator();
    arithmetic_iterator_next_prev();
}