#include <iostream>
#include <vector>
#include <string>

/* You can use globally definced namespace std to avoid using 
*  std::vector<int> arr -> vector<int> arr 
*/
using namespace std;


void vector_play(void){
    // Write a program which creates an empty vector of int and populates
    // it with the values 4, 2, 3, 4, 1 in order
    std::vector<int> arr;

    arr.push_back(0x04);
    arr.push_back(0x02);
    arr.push_back(0x03);
    arr.push_back(0x04);
    arr.push_back(0x01);

    // Display the first and the fourth elements of the vector
    std::cout << "First arr element: " << arr[0] << "\n" << "Fourth arr element: " << arr[3] << "\n" << std::endl;

    // Change the value of the third element to 6
    arr[2] = 6;

    // Print out all the elements of the vector in order
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
    std::cout << '\n';
}

void string_play(void){
    // Write a program which creates a string containing the characters "Hello"
    std::string my_str ("Hello");
    // Display the first and fifth characters of the string
    std::cout << my_str[0] << std::endl;
    std::cout << my_str[4] << '\n';
    // Change the value of the fourth character to 'b'
    my_str[3] = 'b';
    // Print out all the characters of the string in order
    for (int i = 0; i < my_str.size(); i++) {
        std::cout << my_str[i] << std::endl;
    }
    std::cout << '\n';
}

int main() {
    vector_play();
    string_play();
}
