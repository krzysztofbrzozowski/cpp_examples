# How to run C++ in VSCode on MacOS
1. Check if you have compailer
```shell
clang --version

output:

Apple clang version 15.0.0 (clang-1500.1.0.2.5)
Target: x86_64-apple-darwin23.2.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```
If clang does not exist, run
```shell
xcode-select --install
```
2. Install 'C/C++' extention for VSCode
3. Install 'Code Runner' extention
4. Hit run (right top corner)

## /* Passing by address */
![pass_by_value.png](https://krzysztofbrzozowski.com/media/2024/01/31/pass_by_value.png)

## /* Passing by address */
![pass_by_address.png](https://krzysztofbrzozowski.com/media/2024/01/31/pass_by_address.png)

## /* Passing by reference */
![pass_by_reference.png](https://krzysztofbrzozowski.com/media/2024/01/31/pas_by_reference.png)

## /* Passing by const reference */
![pass_by_reference.png](https://krzysztofbrzozowski.com/media/2024/01/31/pass_by_const_reference.png)


## Classes
Test test;
test.func(1, 2.0, "three") -> is called as Test::func(&test, 1, 2.0, "three")

in class can access object as "this" so:
this->i = 100;
"this" is equal to &test

### special member functions
Constructor
Copy constructor
Assignment operator 
Deconstructor

## Pointers

```C
#include <iostream>

using namespace std;

int main() {
	int i{1};                                 // i is a stack variable
	int *p1 = &i;                             // p1 is a pointer to int. Its value is the address of i
	cout << "p1 = " << p1 << endl;            // Displays the address of i
	cout << "*p1 = " << *p1 << endl;          // Displays the value of i
	
	int *p2 = new int;                        // p2 points to memory allocated from the heap
	int *p3 = new int{36};                    // p3 points to int with initial value 36 (C++11)
	//int *p3 = new int(36);                    // older versions of C++
}
```
