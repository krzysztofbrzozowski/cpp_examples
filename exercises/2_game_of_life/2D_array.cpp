/*
• Write a program which
• Initializes a two-dimensional array
• Prints out the value of an element from the array
• Iterates over all the elements and prints out their elements in orde
*/

#include <iostream>

using namespace std;

void regular_2d_array(void) {
    string arr_2d[2][4] = {
        {"0", "1", "2", "3"},
        {"4", "5", "6", "7"} 
    };

    cout << arr_2d[1][0] << endl;
    
    for(int row = 0; row < 2; ++row) {
        for(int col = 0; col < 4; ++col) {
            cout << arr_2d[row][col];
        }
        cout << '\n';
    }
}

/* This examle shall be faster */
void flattened_2d_array(void) {
    string arr_2d[] = {
        "0", "1", "2", "3",
        "4", "5", "6", "7"
    };

    cout << arr_2d[1 * 4 + 0] << endl;
    
    for(int row = 0; row < 2; ++row) {
        for(int col = 0; col < 4; ++col) {
            cout << arr_2d[row * 4 + col];
        }
        cout << '\n';
    }
}


int main() {
    regular_2d_array();
    flattened_2d_array();
}