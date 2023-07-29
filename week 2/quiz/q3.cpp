#include<iostream>
#define X 1

using namespace std;

int main() {

    int i;
    const int i1 = 2;
    const int i2 = i1; // LINE-1: Compilation error due to an invalid variable name (starts with a digit).

    i2 = X + 5; // LINE-2: Compilation error, attempting to assign a value to a constant.

    i = i1; // LINE-3: No compilation error.

    i1 = 4 + 5; // LINE-4: Compilation error, attempting to assign a value to a constant.

    return 0;
}

//line 2 & 4