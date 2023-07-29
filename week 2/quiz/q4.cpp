#include <iostream>
using namespace std;

int& func(int& i) {
    return i = i + 5; 
}

int main() {
    int x = 1, y = 2;
    int& z = func(x); 

    cout << x << " "<<z<<" ";  
     func(x + 1) =y; 
    cout << x<<""<<z;  

    return 0;
}

//error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'