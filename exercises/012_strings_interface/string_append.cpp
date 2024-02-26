#include <string>
#include <iostream>

using namespace std;

int main() {
    string hello{"Hello"};

    hello.append(" world"s);

    cout << "hello = " << hello << endl;

    string hello2{"Hello2"s};

    hello2.append("wow!!!!"s, 3, 2);

    cout << "hello2 = " << hello2 << endl;

    string str2{"for"};
    str2.insert(2, "lde"s);

    cout << str2 << endl;

    /* CAUSING AN ERROR SINCE EXCEEDING BUFFER */
    string str{"orld"};
	cout << "str = " << str << endl;

	auto first = begin(str);

	str.insert(end(str), 16, 'd');                  // Add enough elements to force a reallocation
	
	// first = begin(str);                             // Get the new value of the iterator
	str.insert(first, 'w');                         // Use new value of iterator
	cout << "str = " << str << endl;
}

/* Output
hello = Hello world
hello2 = Hello2!!
folder
 */