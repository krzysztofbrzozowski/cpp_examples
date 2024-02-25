#include <iostream>

using namespace std;

/* Function template for finding max of two nums 
* T is te parameter type */
template <class T>      
T Max(const T &t1, const T &t2) {
    if(t1 > t2)
        return t1;
    return t2;
}

int main() {
    cout << Max(7.0, 2.9) << endl;

    /* 
    double Max(const double &t1, const double &t2) {
    if(t1 > t2)
        return t1;
    return t2;
    }   
    */
}