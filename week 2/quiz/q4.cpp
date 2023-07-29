#include <iostream>
using namespace std;

int& func(int& i) {
    return i = i + 5; // LINE-1: This line assigns the result of (1 + 5) to the reference variable 'i'.
}

int main() {
    int x = 1, y = 2;
    int& z = func(x); // Call to func(x) returns a reference to x and stores it in 'z'.

    cout << x << " "<<z<<" "; // Output: 6, 'x' has been modified by the reference 'z'.
     func(x + 1) =y; // Output: 7, func(x + 1) will modify x to (x + 1) = (6 + 1) = 7 and return the reference to 'x'.
    cout << x<<""<<z; // Output: 7, 'z' is also a reference to 'x' and points to the same memory location.

    return 0;
}

//error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'