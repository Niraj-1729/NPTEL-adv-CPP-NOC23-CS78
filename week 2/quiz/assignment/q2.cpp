#include <iostream>
using namespace std;


int Fun(int& x) { // LINE-1: Declaring a reference parameter 'x' in the function Fun
    x = x * x; // LINE-2: Modifying the value of 'x' by multiplying it by 2
    return x;
}

int main() {
    int x, y;
    cin >> x;
    y = Fun(x);
    cout << x << " " << y;
    return 0;
}