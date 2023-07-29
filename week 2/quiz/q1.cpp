#include <iostream>
using namespace std;

int add(int n1 = 0) { return n1; } // Corrected the function signature
int add(int n1 = 0, int n2 = 0) { return n1 + n2 - 1; } // Corrected the function signature
int add(int n1=0, char c1 = 'a') { return n1 + c1 - 1; } // Corrected the function signature
int add(int n1 = 0, int n2 = 0, int n3 = 0) { return n1 + n2 + n3 - 1; } // Corrected the function signature

int main() {
    int c =add(2,5); // Removed the space between 'c' and 'add'
    cout << c << endl; // Corrected the cout statement
    return 0;
}
//Answer
//call of overloaded 'add(int, int)' is ambiguous
